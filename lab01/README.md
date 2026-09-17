# Языки программирования
## Лабораторная работа 1
### Задание 1 **(4)**
*Составьте глоссарий из определений лекции. Проверка отчета будет включать 
проверку знания определений*
-*Исполняемый файл* (исполняемый код) — файл, содержащий программу в виде набора элементарных инструкций, которая после загрузки в память может быть выполнена на определенном физическом устройстве (процессоре) под управлением опредленной операционной системы.
-*Ассемблер* — язык программирования низкого уровня, в котором каждая инструкция физического устройства представлена в текстовом виде.
 Программа написанная на языке высокого уровня называется
*исходным кодом*.
-*Виртуальная машина* — это средство описания семантики языка
программирования.
-*Стандарт языка программирования* — документ, описывающий язык программирования максимально подробно и, по возможности, наиболее формально.
-*Транслятор* — техническое средство, осуществляющее перевод текста программы с одного языка на другой. Изначально выделялись следующие виды трансляторов.
	 -*Компилятор*. Транслятор, переводящий программу в машинный код для последующего исполнения (С++).
	 -*Интерпретатор*. Транслятор, читающий и исполняющий программу по одной команде (Lisp).
	 -*Псевдокомпилятор* — транслятор, переводящий программу в промежуточное представление (байт-код), который состоит из набора инструкций близких по смыслу к машинному коду*
	 -*Компилирующий интрепретатор* — транслятор, переводящий текст программы во внутреннем представление непосредственно после запуска. В процессе работы программа интерпретируется уже в этом представление (Python).
	 -*REPL-интерпретатор*. Программное средство, работающее в цикле чтения-вычисления-печати (Read-Eval-Print Loop). Интерпретатор в режиме диалога считывает законченную конструкцию языка, транслирует ее, исполняет и выводит результат (IDLE shell Python).
 -*Единица трансляции* — минимальный фрагмент программы, который может быть транслирован независимо от остального кода.
 -*Препроцессинг* (предобработка) — начальный этап трансляции программы.
 -*Сборка* — заключительный этап трансляции, результатом которого является исполняемый файл.

### Задание 3 **(1)**

<img width="418" height="107" alt="03" src="https://github.com/user-attachments/assets/7e637ab1-e13e-4358-953b-e132961ba5e6" />

### Задание 4. **(2)**

<img width="699" height="280" alt="image" src="https://github.com/user-attachments/assets/5c6bd1a7-02b8-47e2-a975-1d00b27c85f3" />
<img width="575" height="184" alt="image" src="https://github.com/user-attachments/assets/2007589a-a94c-41c6-b725-382e9b6afc8e" />
<img width="1374" height="96" alt="image" src="https://github.com/user-attachments/assets/5520fb4d-1075-4097-97c4-821161073d9f" />


### Задание 5 **(2)**

<img width="452" height="235" alt="image" src="https://github.com/user-attachments/assets/65ee19c3-97df-4332-8dfa-2495d63ed810" />
<img width="427" height="121" alt="image" src="https://github.com/user-attachments/assets/56d2b6dc-252e-47a6-9736-f898e711c3fa" />
<img width="954" height="205" alt="image" src="https://github.com/user-attachments/assets/dee8cd0e-f6e1-4018-88e5-4eb5ef04d334" />


### Задание 6 **(2)**

<img width="382" height="92" alt="image" src="https://github.com/user-attachments/assets/1160cfae-0ce0-43db-ba17-d6883c4acb56" />


### Задание 7
*Запишите makefile для сборки программы на С++ из задания на раздельную трансляцию.*

*Обратите внимание, что целью выполнения задания является не написание собственно makefile, а изучение зависимостей в единицах трансляции в написанных программах
утилита* **make** *имеет достаточно удобные средства для автоматического поиска зависимостей, но в данном случае пользоваться ими нельзя. Весь файл должен быть записан
только с использованием базового синтаксиса* 

```
цель : зависимости
    команда
```

* Выполните сборку программы из объектных файлов и проверьте ее работоспособность.
* Проверьте какие команды из makefile выполняются при изменении каждого из исходных файлов.
* Проверьте, что произойдет при сборке, если один из объектных или исполняемых файлов будет потерян.
* Для проверки правильности указания зависимостей измените прототип функции **message** на
```
void message(char* mes);
```
* Выполните сборку проекта и проверьте работоспособность программы.


*В отчет вставьте пояснения о работе make и скриншоты работы в командной строке.*

*Сам makefile также надо сохранить в папке 04*

### Задание 8
*Проверьте различные синтаксические конструкции языка С++. Каждая из них появилась в определенном
стандарте С++. Попытайтесь выполнить трансляцию каждого файла и выясните в стандарте каких годов
были реализованы эти конструкции. Следует проверить стандарты 1998, 2003, 2011, 2014 и 2017 годов.*

#### 1. Использование вектора
```
#include <vector>
#include <iostream>
int main() {
   std::vector<int> v(5);
   for (int i=0;i<5;i++)
       std::cout << v[i]<<' ';
   return 0;
}
```
<img width="478" height="55" alt="image" src="https://github.com/user-attachments/assets/a1a281af-ecd7-4d56-82e2-a20347b17f28" />
Компилируется без предупреждений во всех стандартах

#### 2. Цикл по коллекции.
*Замените цикл для вывода вектора*
```
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v(5);
    // Новый цикл
    for (int x : v)
        std::cout << x << ' ';
    return 0;
}
```
<img width="1080" height="179" alt="image" src="https://github.com/user-attachments/assets/0ad64efb-da9f-4671-8613-26a8bd54ef82" />
#В стандартах до c++11 выдает предупреждение, начиная с с++11 компилируется нормально.

#### 3. Вывод типа по инициализатору
*В цикле по коллекции используйте автоматический вывод типа для переменной x, используя ключевое слово* **auto**.
```
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v(5);
    // Используем auto
    for (auto x : v)
        std::cout << x << ' ';
    return 0;
}
```
<img width="628" height="687" alt="image" src="https://github.com/user-attachments/assets/3fa30bb4-1ad5-4043-97bd-cd8a11e798a4" />
#В стандартах до c++11 выдает предупреждение, начиная с с++11 компилируется нормально.

#### 4. Инициализация списком
*Добавьте в строку создания вектора инициализацию списком.*
```
#include <vector>
#include <iostream>
int main() {
    // Инициализация списком
    std::vector<int> v = {1,2,3,4,5};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```
<img width="1050" height="258" alt="image" src="https://github.com/user-attachments/assets/afdc7d0a-8805-4945-b150-28138a615dcc" />
#В стандартах до c++11 выдает ошибку, начиная с с++11 компилируется нормально.

#### 5. Сепараторы для групп разрядов.
*Добавьте в список инициализации длинное число с сепараторами для групп разрядов.*
```
#include <vector>
#include <iostream>
int main() {
    // Добавлен двоичный литерал 0b1100 (это 12 в десятичной)
    std::vector<int> v = {1,2,3,4,5,0b1100};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```
<img width="1097" height="282" alt="image" src="https://github.com/user-attachments/assets/e62e7f98-5012-42d5-b7a3-2ce28f1047f0" />
#Нигде не выдает ошибки о литералах, только об инициализации.
#### 6. Вывод типа по конструктору. 
*Уберите из строки создания вектора его тип.*
```
#include <vector>
#include <iostream>
int main() {
    // Вывод типа шаблона из конструктора (Class Template Argument Deduction)
    std::vector v = {1,2,3,4,5};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```
<img width="596" height="215" alt="image" src="https://github.com/user-attachments/assets/b5a917d5-4db1-4452-bd21-67fe13c89de0" />
#До стандарта c++17 выдает ошибки

### Задание 9 **(3)**

*Запишите следующую программу на языке С++ и выполните ее трансляцию в 
асемблерные файлы с уровнями оптимизации* **O0**, **O1**, **O2**.
```
#include <iostream>
int main() {
   int x, s = 0;
   std::cin >> x;
   for (int i=0; i<123; i++) 
      s += x ;
   std::cout << s;
   return 0;
}
```
Уровень O0
```
	.file	"main.cpp"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2239:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$0, -4(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	movl	-12(%rbp), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L2:
	cmpl	$122, -8(%rbp)
	jle	.L3
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin

```
Уровень O1
```
	.file	"main.cpp"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2263:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	leaq	44(%rsp), %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	44(%rsp), %edx
	movl	$123, %eax
	.p2align 3
.L2:
	subl	$1, %eax
	jne	.L2
	imull	$123, %edx, %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin

```
уровень o3
```
	.file	"main.cpp"
	.text
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2263:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	movq	.refptr._ZSt3cin(%rip), %rcx
	leaq	44(%rsp), %rdx
	call	_ZNSirsERi
	imull	$123, 44(%rsp), %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	xorl	%eax, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin

```
O0-переменные x, s, i в памяти, цикл выполняется 123 раза с загрузкой, сложением и сохранением.
O1-тело цикла заменено умножением x * 123, но остался пустой счётчик: 123 пустых итерации.
O2-цикл удалён полностью, осталось только умножение; s не создаётся, результат сразу в регистр; xorl вместо movl $0.

## Дополнительные задания
### Задание 1 **(4)**
*Перепишите программу из предыдущего задания на Java.
Выполните ее трансляцию и дизасемлирование из байт-кода.
Найдите, где записан цикл в байт-коде.*

### Задание 2 **(4)**
*Найдите другие примеры работы оптимизатора кода на С++. Как и в предыдущем задании, выполните
дизасемблирование программ с разными уровнями оптимизации и объясните в чем заключалась оптимизация.*

### Задание 3 **(2)**
*Проверьте, что произойдет, если в программе на С++ с несколькими единицами трансляции дважды записать
директиву* **include** *с одним и тем же включаемым файлом. Для устранения ошибок добавьте
во включаемый файл защиту от повторного включения, записанную с использованием директив условной 
трансляции* **#define**, **#ifndef**, **#endif**.
