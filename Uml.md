# UML

## 类的UML表示

> 使用UML表示一个类，主要由三部分组成。类名、属性、方法。其中属性和方法的访问修饰符用 - 、# 、+ 表示 private、protected、public.

```
@startuml

class A{
	- String field
	+ A()
	# void method()
}
note right: 这是测试类 A

@enduml
```

* 泛化

1. 继承

> 实线和三角形的抽象表示，指向谁，即继承谁.

```
@startuml

    class A
    abstract B

    ' A 继承 B
    A --|> B

@enduml
```

2. 实现 

> 虚和三角形的抽象表示，指向谁，即实现谁.

```
@startuml

    class A
    interface C

    ' A 实现 C
    A ..|> C

@enduml
```

3. 依赖

> 类之间, 最弱的关联方式. 常用于在A类的方法中使用B类的对象作为参数、局部变量或者对B类静态方法的调用.

```
@startuml

    class A
    class B

    ' A 依赖 B
    A ..> B

@enduml
```

4. 单向关联

```
@startuml

	class A{
		- B b
	}
	class B

	' A 关联 B'
	A --> B

@enduml
```

5. 双向关联 

```
@startuml

	class A{
		- B b
	}
	class B{
		- A a
	}

	' A 关联 B
	A -- B

@enduml
```

6. 自关联 

```
@startuml

	class A{
		- A a
	}
	

	' A 关联 A
	A --> A

@enduml
```

7. 聚合 

> 在关联关系的基础上，延伸出聚合关系，强的关联关系，表示has-a关系。整体与部分的关系，部分不依赖于整体，可独立存在。常用于成员变量。

```
@startuml

	class Car{
		- List<Wheel> wheels
	}
	class Wheel

	' Car 关联 Wheel
	Car "1" o-- "4" Wheel

@enduml
```

8. 组合

> 在关联关系的基础上，延伸出另外一种关联关系，组合关系，表示contains-a关系。整体与部分的关系，部分依赖于整体，不可独立存在。常用于成员变量。

```
@startuml

	class Body{
		- List<Action> actions
	}
	class Action

	' Body 关联 Action'
	Body "1" *-- "N" Action

@enduml
```

9. PlantUml 排版

* UP

> 使用up时，被指向对象在上。

```
@startuml

class A1
class B1

A1 -up-> B1

class A2
class B2
A2 <-up- B2

@enduml
```

* down

> 使用down时，被指向对象在下。

```
@startuml

class A1
class B1

A1 -down-> B1

class A2
class B2
A2 <-down- B2

@enduml
```

* left

> 使用left时，被指向对象在左。

```
@startuml

class A1
class B1

A1 -left-> B1

class A2
class B2
A2 <-left- B2

@enduml
```

* right

> 使用right时，被指向对象在右。

```
@startuml

class A1
class B1

A1 -right-> B1

class A2
class B2
A2 <-right- B2

@enduml
```