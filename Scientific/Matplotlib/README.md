## MATPLOTLIB
Matplotlib is one of the most renowned scientific package in Python.

### MPL_01.py
Preparing a plot in "figure > gridspec > axes" sequence. This is the most fundamental approach on creating axes on a figure, and can coordinate and designate size of axes flexibly.

> "도면 > 격자좌표 > 도표" 순서로 그래프를 준비한다. 이는 도면에 표를 생성하는 가장 기본적인 접근법이며, 도표의 위치와 크기를 유연하게 지정할 수 있다.

### MPL_02.py
Preparing a plot in "figure > axes + gridaxes" sequence, merging two steps into one. This is one of the generally used method of creating axes on a figure in Matplotlib.

> "도면 > 도표 + 격자좌표" 순서로 그래프를 준비하며, 두 단계를 하나로 통합하였다. 이는 Matplotlib에서 가장 많이 사용되는 도표 생성 접근법에 해당한다.

### MPL_03.py
Preparing a plot in "figure & axes + gridspec" approach, creating both figure and axes using a single API. This is the most simplified method but not as flexible as MPL_01.py and MPL_02.py scripts.

> "도면 & 도표 + 격자좌표" 접근법으로 도면과 도표를 하나의 API로 한 번에 생성한다. 가장 간략화된 방법이지만, 이전의 MPL_01.py와 MPL_02.py 스크립트보다 유연하지가 않다.

### MPL_04.py
Visualizing NumPy data using image plot on axes.

> 도표에 NumPy 데이터를 이미지 그래프로 시각화하여 보여준다.

### MPL_05.py
Visualizing line plot using a pair of list objects. This script also deals with customizing axes features and attributes.

> 도표에 한 쌍의 리스트 객체를 사용하여 선 그래프 시각화하여 보여준다. 본 스크립트는 또한 도표의 특징과 속성을 커스터마이징 방법을 보여준다.

### MPL_06.py
Another example of visualizing line plot using a pair of list objects. As continuation of MPL_05.py, this script mainly focuses on axes' ticks and grid.

> 도표에 한 쌍의 리스트 객체를 사용하여 선 그래프 시각화의 또다른 예시이다. MPL_05.py의 연속으로 도표의 축 및 격자표시를 집중적으로 조명한다.

### MPL_07.py
In-depth customization of both major and minor ticks on x, y-axis; requires modules imported from "matplotlib.ticker" .

> 도표의 x 및 y 축의 주/보조 표시를 심층적으로 커스터마이징 하는 방법이다; "matplotlib.ticker"로부터 모듈을 불러와야 한다.