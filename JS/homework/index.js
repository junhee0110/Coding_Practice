//DOM
let all_btn = document.getElementById("all_btn");
let id_input = document.getElementById("id_input");
let search = document.getElementById("search");

let result = document.getElementById("result");
let user_info = document.getElementById("user_info");

let ss = document.getElementsByTagName("h2");

//-------------FUNCTIONS------------------//

//Function that shows information in the object
const show_object = (data) =>
{
    let text = "<ul>"
    for (let x in data)
        text += "<li>" + x + " : " + data[x] + "</li>";
    text += "</ul>"

    return text;
};

//Function that shows all informations of the user 
const get_one_info = (id, both) =>
//id is id of user, both is bool type that indicates change both section
{
    fetch("https://koreanjson.com/users/"+id)
    .then((res) => res.json())
    .then((data) =>
    {   
        if (data !== null)//Rejected => fetch API has no rejected promise
        {
            if (both)
                result.innerHTML = "<ul>" + get_user_info_string(data) + "</ul>";

            user_info.innerHTML = show_object(data);
        }
        else
            result.innerHTML = "결과가 없습니다.";

    });
};

//Funtion that return info string in the form of HTML
const get_user_info_string = (user, num = null) =>
//user is user object, num is user id to add id propertise
{
    if (num === null) //if argument has no user id
    {
        let text = "<li>" + 
                user.name + " (" + user.username + ") " +
                user.website + "</li>";

        return text;
    }
    else //if argument has user id
    {
        let text = "<li id = 'info_" + num + "'>" +  //Add id propertise to Add EventListener 
                user.name + " (" + user.username + ") " +
                user.website + "</li>";

        return text;
    }
};

//-------------EVENT LISTENER------------------//

all_btn.addEventListener("click", () =>
{
    fetch("https://koreanjson.com/users")
    .then((res) => res.json())
    .then((data) =>
    {   
        if(data !== null)//Rejected => fetch API has no rejected promise
        {   
            temp_str = "<ul>";

            for(let x = 0 ; x < data.length ; x++)
            {
                temp_str += get_user_info_string(data[x], x); // Add <li> tag of each user
            }
            temp_str += "</ul>";

            result.innerHTML = temp_str;

            for(let x = 0 ; x < data.length ; x++) // Add Eventlistener to each <li>
            {
                let temp_ele = document.getElementById('info_' + x);

                temp_ele.addEventListener('click', () => //click event to show one user
                {
                    get_one_info(x+1, false);
                });
                temp_ele.addEventListener('mouseover', () => //mouseover event => change cursor
                {
                    temp_ele.style.cursor = "pointer";
                });
            }
        }
        else //if rejected
            result.innerHTML = "결과가 없습니다.";
    });
});

search.addEventListener("click", () => get_one_info(id_input.value, true));

id_input.addEventListener("keyup", (e) => //Enter event => same with click search button
{
    if(e.key === "Enter")
        get_one_info(id_input.value, true);
});
