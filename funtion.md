# 함수 설명

## contact.h
* int createContact(Contact *p);
  ```
  연락처 추가 함수
* void readContact(Contact p);
  ```
  연락처 조회 함수
  하나의 연락처 p를 "이름 : 전화번호" 형식으로 출력합니다.
* int updateContact(Contact *p);
  ```
  연락처 수정 함수
* int deleteContact(Contact *p);
  ```
  연락처 삭제 함수
* int selectMenu();
  ```
  메뉴 선택 함수
  어떤 기능을 실행할지 화면에 보여지는 번호로 선택합니다.
  1. 연락처 조회
  2. 연락처 추가
  3. 연락처 수정
  4. 연락처 삭제
  5. 파일저장
  6. 연락처 이름 검색
  7. 연락처 번호 검색
  0. 종료
* void searchName(Contact *p, int count);
  ```
  '6. 연락처 이름 검색'을 선택하면 실행하게 됩니다.
  이름으로 연락처를 검색합니다.
* void searchNumber(Contact*p, int count);
  ```
  '7. 연락처 번호 검색'을 선택하면 실행하게 됩니다.
  전화번호로 연락처를 검색합니다.
  완전한 전화번호를 입력해야만 원하는 연락처가 나오게 됩니다.
## manager.h
* void listContact(Contact *p, int count);
  ```
  '1. 연락처 조회'를 선택하면 실행하게 됩니다.
  연락처의 목록을 조회하는 것으로, 연락처의 모든 구성요소를 보여줍니다.
  또한 모든 연락처 앞에 번호를 매기고, 만약 전화번호를 삭제했다면, 보이지 않게 해줍니다.
  
* int selectDataNumber(Contact *p, int count);
  ```
  데이터 선택 함수
  연락처를 수정하거나 삭제할 때, 어떤 연락처를 선택할 수 있도록 하는 함수입니다.
* void saveContactData(Contact *p, int count);
  ```
  '5. 파일저장'을 선택하면 데이터 저장 함수가 실행됩니다.
  contact.txt 파일에 생성한 연락처 목록을 저장합니다.
* int loadContactData(Contact *p);
  ```
  데이터 로드 함수
  처음 프로그램을 실행시킬 때 contact.txt 파일을 불러옵니다.
  만약 파일이 존재하지 않으면 파일이 없다고 나옵니다. 

