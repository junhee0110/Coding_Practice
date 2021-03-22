function grade(score){
    if(score === 100)
    {
        console.log("A");
    }

    else if(score >= 90)
    {
        console.log("B");
    }
    
    else if(score >= 80)
    {
        console.log("C");
    }

    else if(score >= 70)
    {
        console.log("D");
    }

    else
    {
        console.log("F")
    }
}

grade(100);
grade(98);
grade(87);
grade(76);
grade(65);