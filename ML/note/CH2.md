# 2.1 실제 데이터로 작업하기

- StatLib 저장소에 있는 캘리포니아 주택 가격 데이터를 사용한다. [링크](https://goo.gl/QgRbUL)
- 범주형 특성이 추가됐고 몇 개 특성이 제외되어 있다.

# 2.2 큰 그림 보기

- 맨 처음 할 일은 **캘리포니아 인구조사 데이터**를 사용해 **캘리포니아의 주택 가격 모델**을 만드는 것이다.
- 데이터에는 각 블록 그룹마다 **인구**, **중간 소득**, **중간 주택 가격** 등을 담고 있다.
- 블록 그룹은 샘플 데이터를 발표하는 데 사용하는 최소한의 지리적 단위이다.
- 이 모델을 학습시켜서 다른 측정 데이터가 주어졌을 때 구역의 중간 주택 가격을 예측해야 한다. 


**[TIP]** 우리가 첫번째로 할 일은 **머신러닝 프로젝트 체크리스트**를 만드는 것이다. 다음은 부록에 딸려있는 체크리스트이다.

1. 문제를 정의하고 큰 그림을 그린다.
2. 데이터를 수집한다.
3. 통찰을 얻기 위해 데이터를 탐색한다.
4. 데이터에 내재된 패턴이 머신러닝 알고리즘에 잘 들어나도록 데이터를 준비한다.
5. 여러 다른 모델을 시험해보고 가장 좋은 몇 개를 고른다.
6. 모델을 세밀하게 튜닝하고 이들을 연결해 최선의 솔루션을 만든다.
7. 솔루션을 출시한다.
8. 시스템을 론칭하고 모니터링, 유지보수한다.

뒤에 내용이 더 있지만 생략한다. 많은 머신러닝 프로젝트에 잘 들어맞지만 필요에 따라 수정하는 것이 좋다.

## 2.2.1 문제 정의

- 첫번쨰로 할 것은 목적을 아는 것이다. ***모델을 어떻게 사용해 이익을 얻으려고 하는가?***
- 목적을 아는 것은 다음을 결정한다. 
1. 문제를 어떻게 구상할지
2. 어떤 알고리즘을 선택할지
3. 모델 평가에 어떤 성능 지표를 사용할지
4. 모델 튜닝을 위해 얼마나 노력할지
- 우리가 만드는 모델의 출력이 여러가지 다른 신호와 함꼐 다른 머신러닝 시스템에 입력으로 사용된다고 가정하자.

```
[Pipeline]

1.  데이터 처리 컴포넌트(Component)들이 연속되어 있는 것을 데이터 파이프라인(Pipeline)이라고 한다.
2. 머신러닝 시스템은 데이터를 조작, 변환할 일이 많아 파이프라인을 사용하는 일이 매우 흔하다.
3. 보통 각 컴포넌트들은 완전히 독립적이다. 하지만 파이프라인 덕분에 시스템을 이해하기 쉬워, 각 팀은 각자의 컴포넌트에 집중 할 수 있다.
```

-  