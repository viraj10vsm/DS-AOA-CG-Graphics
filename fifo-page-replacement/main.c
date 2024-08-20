#include<stdio.h>
int main()
{
int reference_string[10], page_faults = 0, m, n, s, pages, frames;
printf("\nEnter Total Number of Pages:\t");
scanf("%d", &pages);
printf("\nEnter values of Reference String:\n");
for(m = 0; m < pages; m++)
{
scanf("%d", &reference_string[m]);
}
printf("\nEnter Total Number of Frames:\t");
scanf("%d", &frames);
int temp[frames];
for(m = 0; m < frames; m++)
{
temp[m] = -1;
}
for(m = 0; m < pages; m++)
{
s = 0;
for(n = 0; n < frames; n++)
{
if(reference_string[m] == temp[n])
{
s++;
page_faults--;
}
}
page_faults++;
if((page_faults <= frames) && (s == 0))
{
temp[m] = reference_string[m];
}
else if(s == 0)
{
temp[(page_faults - 1) % frames] = reference_string[m];
}
printf("\n");
for(n = 0; n < frames; n++)
{
printf("%d\t", temp[n]);
}
}
printf("\nTotal Page Faults:\t%d\n", page_faults);
return 0;
}








/*
Aim: Write a program in C demonstrate the concept of page replacement
policies for handling page faults eg: FIFO, LRU.

Theory:
FIFO(First In First Out):
● The simplest page-replacement algorithm and work on the basis of first
in first out (FIFO). It throws out the pages in the order in which they were
brought in.
● The time is associated with each page when it was brought into main
memory.
● This algorithm always chooses oldest page for replacement.
● Since replacement is FIFO, a queue can be maintained to hold all the
pages in main memory.
● This algorithm doesn't care about which pages are accessed frequently
and which are not. However, it is used in windows 2000.

FIFO Algorithm:
Let capacity be the number of pages that memory can hold. Let set be the
current set of pages in memory.
1. Start traversing the pages.
i) If set holds less pages than capacity.
a) Insert page into the set one by one until the size of set reaches
capacity or all page requests are processed.
b) Simultaneously maintain the pages in the queue to perform
FIFO.
c) Increment page fault
ii) Else
If current page is present in set, do nothing.
iii)Else
a) Remove the first page from the queue as it was the first to be
entered in the memory
b) Replace the first page in the queue with the current page in the
string.
c) Store current page in the queue.
d) Increment page faults.
2. Return page faults.

*/

