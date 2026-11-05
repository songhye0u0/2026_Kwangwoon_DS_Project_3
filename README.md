# 2026_Kwangwoon_DS_Project_3
2026-11-09 업로드 예정

[데이터 구조 Project 3 과제 안내]

과제에 대한 추가 내용 및 변경 사항이 README 파일에 상시 업데이트될 예정이므로, 주기적으로 확인해 주시기 바랍니다.

---

## Update Notes

**2026-11-09 :**
- Initial upload

---

## Due Date

- 설계: 2026년 12월 6일 일요일 23:59:59까지
  - 추가 제출: 2026년 12월 7일 월요일 00:59:59까지, 10% 감점

- 제출 전에 반드시 과제 제안서를 꼼꼼히 읽고, 요구사항을 모두 충족했는지 확인해 주시기 바랍니다.
- 프로젝트 진행 중 궁금한 사항은 GitHub 저장소의 Issues 탭을 통해 질문해 주시기 바랍니다.

---

## How to Clone Repository

```bash
sudo apt-get install git
git clone <저장소 주소>
```

---

## NEED TO DOWNLOAD

```bash
sudo apt install make
sudo apt install gcc
sudo apt install g++
```

---

## How to Run

- Makefile이 위치한 디렉토리로 이동한 후 실행합니다.
- command.txt, graph_L.txt, graph_M.txt는 프로그램 실행 디렉토리에 있어야 합니다.

```bash
cd <Makefile이 위치한 폴더>
make
./run
```

---

## How to Check Memory Leak

- make로 생성된 run 파일을 Valgrind로 실행하여 메모리 누수를 확인할 수 있습니다.
- LOAD를 반복하거나 EXIT로 종료하는 경우에도 메모리가 정상적으로 해제되는지 확인합니다.

```bash
sudo apt-get update
sudo apt-get install valgrind
valgrind ./run
```

---

## 구현 고려사항

- 제공된 스켈레톤 코드를 기반으로 구현하며, 파일 이름·클래스 이름·기존 함수의 이름 및 형태는 임의로 변경하지 않는다. 구현에 필요한 함수와 변수는 자유롭게 추가할 수 있다.
- 프로그램의 실행 흐름, 명령어 처리 방식, 출력 형식 및 에러 코드는 과제 제안서를 따른다.
- 스켈레톤 코드의 미구현 부분은 학생이 직접 작성하고 보완하여 완성해야 한다.
- 파일 및 문자열 입출력과 오류 처리를 위한 표준 라이브러리는 사용할 수 있다. STL 컨테이너 및 관련 타입은 vector, stack, queue, string, pair만 허용하며, map은 그래프의 인접 정보 저장 용도로만 사용한다.
- SORT와 KRUSKAL에서 사용하는 Heap은 vector를 이용하여 직접 구현한다. priority_queue와 make_heap, push_heap, pop_heap, sort_heap 등의 함수는 사용할 수 없다.
- 병합 정렬도 vector를 이용하여 직접 구현하며, sort, stable_sort, qsort, merge, inplace_merge 등 정렬 과정을 대신하는 라이브러리 함수는 사용할 수 없다.
- command.txt, graph_L.txt, graph_M.txt는 프로그램 실행 디렉토리에 두며, 파일 이름은 변경하지 않는다.
- LOAD 명령어는 여러 번 수행할 수 있다. 새로운 그래프를 불러오면 기존 그래프의 메모리를 해제하고 새 그래프로 교체한다.
- BFS와 DFS는 방문 가능한 인접 정점 중 번호가 작은 정점을 먼저 방문한다.
- KRUSKAL은 간선의 가중치가 같으면 두 끝점 중 작은 정점 번호를 먼저 비교하고, 이 번호도 같으면 큰 정점 번호를 비교하여 오름차순으로 처리한다.
- SORT는 H(힙 정렬) 또는 M(병합 정렬) 중 선택한 알고리즘 하나만 수행하며, A(오름차순)와 D(내림차순)를 모두 지원한다. 가중치가 같으면 두 경우 모두 이웃 정점 번호가 작은 간선을 먼저 출력한다.
- SORT의 중간 과정과 비교 횟수는 과제 제안서에 명시된 방식으로 출력한다. 정렬할 인접 간선이 없으면 에러 코드 900을 출력하며, 정렬 과정에서 저장된 그래프는 변경하지 않는다.
- 모든 명령어의 실행 결과는 제안서의 출력 형식에 맞춰 log.txt에 기록하며, 파일이 이미 존재하면 기존 내용 뒤에 이어서 저장한다.
- EXIT 실행 시 동적으로 할당한 메모리를 모두 해제하고 프로그램을 종료한다. LOAD를 반복하는 경우에도 메모리 누수가 발생하지 않도록 구현한다.
- 제공된 Makefile을 사용하여 Ubuntu 20.04 환경에서 컴파일과 실행을 확인한다.

---
