// TODO
// 1. 버튼을 클릭하면, p의 내용이 바뀌게 해보세요

const btn = document.querySelector('button');
const text = document.querySelector('p');

btn.addEventListener('click', ()=>{
    text.textContent = 'Button is clicked';
});