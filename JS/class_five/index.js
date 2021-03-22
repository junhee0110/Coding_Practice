const BASEURL = "https://koreanjson.com/users"

axios(
    {
        method: "get",
        url: BASEURL,
    }
    ).then(result => 
        {
            console.log(result.data);
        }
    );

const getName = async () =>
{
    const result = await axios
    (
        {
            method: "get",
            url: BASEURL,
        }
    );

    console.log(result.data)
};

getName();