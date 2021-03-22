function sum(a, b){
    let max = a>b ? a : b;
    let min = a>b ? b : a;
    let result = 0;

    for(let i = min ; i <= max ; i++){
        result += i;
    }

    return result;
}

console.log(sum(3, 5));
console.log(sum(10, -1));