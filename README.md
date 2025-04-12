The push_swap project is part of the 42 school curriculum, aiming to sort a stack of integers using a limited set of operations while minimizing the number of steps.<br> The program generates a sequence of instructions that, when applied to the input stack, result in it being sorted in ascending order.<br>​

Project Description<br> The push_swap program takes a list of integers as arguments and outputs a sequence of instructions required to sort them.<br> Two stacks are used: a (containing the input data) and b (initially empty).<br> Available operations include:<br>​

sa, sb, ss – swap the first two elements at the top of a stack<br>​

pa, pb – push the top element from one stack to the other<br>​

ra, rb, rr – rotate a stack upwards<br>​

rra, rrb, rrr – rotate a stack downwards<br>​

The goal is to sort stack a with the fewest possible operations.<br>​

Compilation and Execution<br> To compile the project, use the command:<br> make<br> Then run the push_swap program with a list of integers as arguments:<br> ./push_swap 3 2 1 6 5 4<br> To verify the correctness using checker, use:<br> ./push_swap 3 2 1 | ./checker 3 2 1<br>​

The push_swap project provides an excellent introduction to sorting algorithms, data structures (stacks), and code optimization for performance.<br> It teaches algorithmic complexity analysis and efficient memory management in the C programming language.<br>
<br>
<br>
<br>
Projekt push_swap to zadanie realizowane w ramach programu szkoły 42, którego celem jest posortowanie stosu liczb całkowitych przy użyciu ograniczonego zestawu operacji, minimalizując liczbę wykonanych kroków.<br> Program generuje sekwencję instrukcji, które po zastosowaniu na stosie wejściowym prowadzą do jego posortowania w porządku rosnącym.<br>​

Opis projektu<br>
Program push_swap przyjmuje jako argumenty listę liczb całkowitych i wyświetla na standardowym wyjściu sekwencję instrukcji niezbędnych do ich posortowania.<br> Do dyspozycji są dwa stosy: a (zawierający dane wejściowe) oraz b (początkowo pusty).<br> Dostępne operacje to:<br>​

sa, sb, ss – zamiana miejscami dwóch pierwszych elementów stosu<br>​

pa, pb – przeniesienie elementu z jednego stosu na drugi<br>​

ra, rb, rr – rotacja stosu w górę<br>​

rra, rrb, rrr – rotacja stosu w dół<br>​

Celem jest uzyskanie posortowanego stosu a przy możliwie najmniejszej liczbie operacji.<br>​

Kompilacja i uruchomienie<br>
Aby skompilować projekt, użyj polecenia:<br> make<br> Następnie uruchom program push_swap z listą liczb jako argumentami:<br> ./push_swap 3 2 1 6 5 4<br> Aby sprawdzić poprawność działania za pomocą checker, użyj:<br> ./push_swap 3 2 1 | ./checker 3 2 1<br>​

Projekt push_swap stanowi doskonałe wprowadzenie do algorytmów sortowania, struktur danych (stosów) oraz optymalizacji kodu pod kątem wydajności.<br> Uczy analizy złożoności algorytmicznej oraz efektywnego zarządzania pamięcią w języku C.<br>
