### Map & Set

- **Map & Set**
  - Map & Set은 ES6에서 새로 도입한 데이터 구조입니다.
  - **Map**은 키와 값을 연결한다는 점에서 객체와 비슷하고
  - **Set**은 중복을 허용하지 않는다는 점을 제외하면 배열과 비슷합니다.
  - 키와 값을 연결할 목적이라면 객체보다 **Map**을 선택하는게 나은 선택입니다.

---

### Map 사용하기

#### 맵의 생성

```javascript
const u1 = { name: "seongwpa" };
const u2 = { name: "yujo" };
const u3 = { name: "seoh" };
const u4 = { name: "cbaek" };

// Map 생성
const userRoles = new Map();

// Map의 set() 메소드를 써서 사용자 역할을 할당

// 할당 방법 1
userRoles.set(u1, "User");
userRoles.set(u2, "User");
userRoles.set(u3, "Admin");

// 할당 방법 2 - set() 메소드는 체인으로 연결이 가능
userRoles.set(u1, "User").set(u2, "User").set(u3, "Admin");

// 할당 방법 3 - 생성자에 배열의 배열을 넘기는 형태로도 할당 가능
const userRoles = new Map([
  [u1, "User"],
  [u2, "User"],
  [u3, "admin"],
]);
```

#### 맵의 사용

```javascript
// u2의 역할을 알고싶을 때 get()을 사용
userRoles.get(u2);
> "User"

// 맵에 키가 존재하는지 확인 할 때 has()를 사용
userRoles.has(u1);
> true
userRoles.has(u4);
> false

// size 프로퍼티는 맵 안에 있는 요소들의 갯수를 반환
userRoles.size;
> 3

// map은 for...of 루프를 사용할 수 있습니다.
for(let u of userRoles.keys())
  console.log(u.name)
> seongwpa // u1
yujo // u2
seoh // u3

// 맵의 요소를 지울 때는 delete() 메서드를 사용합니다.
userRoles.delete(u2);
userRoles.size
> 2

// 맵의 요소를 모두 지울 때는 clear() 메서드를 사용합니다
userRoles.clear();
userRoles.size
> 0
```

---

### Set 사용하기

#### Set의 생성 및 사용

```javascript
const roles = new Set();

roles.add("User");
console.log(roles);
> Set(1) { 'User' }

roles.add("Admin");
console.log(roles);
> Set(2) { 'User', 'Admin' }

// Map과 마찬가지로 Set에도 size 프로퍼티가 있습니다.
roles.size;
> 2

// Set의 장점은 추가하려는 요소가 Set에 있는지 확인할 필요가 없다는 점입니다.
// 추가하려는 요소가 이미 Set안에 존재한다면 아무일도 일어나지 않습니다.
roles.add("User");
roles.size;
> 2

// 요소를 제거할 때는 delete()를 사용합니다.
// 제거에 성공하면(제거하려는 요소가 Set안에 존재했다면) True를 반환하고 그렇지 않다면 Flase를 반환합니다.
console.log(roles.delete("Admin"));
> true
console.log(roles);
> Set(1) { 'User' }
console.log(roles.delete("Admin"));
> false

```

---

- 잘못 된 부분이 있거나 이해가 되지 않는 부분이 있다면 댓글로 알려주시면 감사하겠습니다.
