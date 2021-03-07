// TODO
// 1. class 이름이 title인 태그에 접근해서, 내용을 바꿔보세요
// 2. id 이름이 date인 태그에 접근해서. 내용을 바꿔보세요
// 3. p태그의 내용을 바꿔보세요

const one = document.querySelector('.title');
const two = document.querySelector("#date");
const three = document.querySelector('p');

one.textContent = 'Yoo-Hoo~~~';

two.textContent = "날짜 몰라용~";

three.textContent = "여기다 내용 입력 못하지렁";