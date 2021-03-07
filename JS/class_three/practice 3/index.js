// TODO
// 1. 버튼을 클릭하면, p 태그에 input 태그에 입력한 내용이 들어가게 해뵤세요

const input = document.querySelector('input');
const btn = document.querySelector('button');
const text = document.querySelector('p');

btn.addEventListener('click', () => 
{
    text.textContent = input.value;
});