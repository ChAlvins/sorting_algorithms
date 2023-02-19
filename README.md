# Sorting Algorithms & Big O Notation

## Definition of Terms

***Time complexity***

> Defined as the amount of time taken by an algorithm to run as a function of the length of the input. Is described by *asymptotic notation*.

***Asymptotic notation***

> Used to describe the running time of an algorithm. You can get more insight from [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/asymptotic-notation).

***O(<expression>)***

> A.k.a *Big O Notation*. Stands for *in the order of*. It gives the **asymptotic upper bound** on the running time i.e. the best case time complexity of an algorithm's execution.

![O(n)](https://cdn.kastatic.org/ka-perseus-images/501211c02f4c6765f60f23842450e1151cfd9c89.png)

***Ω(<expression>)***

> A.k.a *Big Ω Notation*. Stands for *in the omega of*. It gives the **asymptotic lower bound** on the running time i.e. the worst case time complexity of an algorithm's execution.

![Ω(n)](https://cdn.kastatic.org/ka-perseus-images/c02e6916d15bacae7a936381af8c6e5a0068f4fd.png)

***Θ(<expression>)***

> A.k.a *Big Θ Notation*. Stands for *in the theta of*. It gives **asymptotic tight bound** on the running time i.e. the region described by both *O(<expression>)* and *Ω(<expression>)*.[^1]

![Θ(n)](https://cdn.kastatic.org/ka-perseus-images/c14a48f24cae3fd563cb3627ee2a74f56c0bcef6.png)

[^1]: k<sub>1</sub> denotes *O(n)* while k<sub>2</sub> denotes *Ω(n)*

## Some background info

Sorting algorithms are algorithms that put the elements of a data structure in order. For this project, we'll be looking at a few sorting algorithms i.e. *bubble sort*, *insertion sort*, *selection sort* and *quick sort*.[^2]
Below are some of the parameters that set each of these algorithms apart:

| Algorithm | O | Θ | Ω | Memory | Stability | Method | Info |
| -- | -- | -- | -- | -- | -- | -- | -- |
| Bubble | n | n<sup>2</sup> | n<sup>2</sup> | 1 | Stable | Exchanging | Tiny code size |
| Insertion | n | n<sup>2</sup> | n<sup>2</sup> | 1 | Stable | Insertion | *O(n + d)*, in the worst case over sequences that have d inversions. |
| Selection | n<sup>2</sup> | n<sup>2</sup> | n<sup>2</sup> | 1 | Not stable | Selection | Stable with O(n) extra space, when using linked lists, or when made as a variant of Insertion Sort instead of swapping the two items. |
| Quick | nlog(n) | nlog(n) | n<sup>2</sup> | log(n) | Not stable | Partitioning | Quicksort is usually done in-place with O(log(n)) stack space. |

[^2]: Are collectively known as *Comparison sorts*. *Non-comparison sorts* will be discussed later.

## Sidebar

This project will enable us to account for the running time, thus efficiency, of our future programs. Time and Space complexities are hallmarks of a skilled Software Engineer and we should therefore strive for the best. :grinning:
