function twoOrFive(num){
    if (num % 2 === 0){
        console.log("2의 배수입니다.");
    }

    else if (num % 5 === 0){
        console.log("5의 배수입니다.")
    }

    else{
        console.log("2나 5의 배수가 아닙니다.")
    }
}

twoOrFive(2);
twoOrFive(5);
twoOrFive(17);