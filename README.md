## 数据结构

### 有关概念和术语

#### 1.数据

数据（Data）是信息的载体，它能够被计算机识别、存储和处理。数据是计算机加工的原料，应用程序能处理各种各样的数据，包括数值数据和非数值数据。数值数据是一些整数、实数和复数；非数值数据包括字符、文字、图形、图像、语音等。

#### 2.数据元素

数据元素（Data Element）是数据的基本单位，在计算机程序中通常作为一个整体进行考虑和处理。一个数据元素可由若干个数据项（Data Item）组成。在不同的条件下，数据元素又可称为元素、结点、顶点、记录等。例如，学生信息检索系统中学生信息表中的一个记录、教学计划编排问题中的一个顶点等，都被称为一个数据元素。

#### 3.数据项

数据项（Data Item）指不可分割的、具有独立意义的最小数据项，数据项有时也称为字段（field）或域。例如，学籍管理系统中学生信息表中的每一个数据元素就是一个学生记录。它包括学生的学号、姓名、性别、籍贯、出生年月、成绩等数据项。这些数据项可以分为两种：一种叫做初等项，如学生的性别、籍贯等，这些数据项是在数据处理时不能再分割的最小单位；另一种叫做组合项，如学生的成绩，它可以再划分为数学、物理、化学等更小的单位。通常，在解决实际应用问题时把每个学生记录当作一个基本单位进行访问和处理。

#### 4.数据结构

数据结构（Data Structure）是指互相之间存在着一种或多种关系的数据元素的集合。在任何问题中，数据元素都不会是孤立的，在它们之间存在着这样或那样的关系，这种数据元素之间存在的关系成为数据的逻辑结构，根据数据元素之间关系的不同特性，通常有以下4类基本的逻辑结构。

> （1）集合结构：在集合结构中，数据元素之间的关系是”属于同一个集合“。数据元素之间除了同属于一个集合之外，不存在任其他关系。
>
> （2）线性结构：在该结构中，数据元素除了同属于一个集合外，数据元素之间还存在着一对一的顺序关系。
>
> （3）树形结构：该结构的数据元素之间存在着一对多的层次关系。
>
> （4）图形结构：该结构的数据元素之间存在这多对多的任意关系，图形结构也成为网状结构。

数据结构包括数据的逻辑结构和物理结构。数据的逻辑结可以看做从具体问题抽象出来的数学模型，它与数据的存储无关。数据的逻辑结构在计算机中的出存储表示（又称映像）称为数据的物理结构（或称存储结构）。它所研究的是数据结构在计算机的实现方法，包括数据结构中数据元素的存储表示及数据元素之间关系的表示。

在计算机中，数据的存储方法包括顺序存储和链式存储。

> （1）顺序存储方法通过数据元素在计算机中存储位置关系来表示元素间的逻辑关系，通常把逻辑上相邻的元素存储在物理位置相邻的存储单元中。顺序存储是一种最基本的存储表示方法，通常借助程序设计语言中的数组来实现。
>
> （2）链式存储方法对逻辑上相邻的元素不要求其物理位置相邻，元素间的逻辑关系通过指针字段来表示，链式存储结构通常借助程序设计语言中的指针来实现。
>
> 除了顺序存储方法和链式存储方法，有时为了查找方便还采用索引存储方法和散列表（Hash）存储方法。
>
> 讨论数据结构的目的就是在计算机中实现对数据的操作。因此在讨论数据的组织结构时必然要考虑在该结构上进行的操作（或称运算）。事实上，数据结构是专门研究某一类数据的表示方法及其相关操作实现算法的一门学科。

#### 5.数据类型

数据类型（Data Type）是和数据结构密切相关的一个概念，在高级程序设计语言中用以限制变量取值范围和可能进行的操作的总和称为数据类型。因此，所谓数据类型，一是限定了数据的取值范围（实际上与存储形式有关）；二是规定了数据能够进行的一组操作（运算）。

数据类型可分为两类：一类是非结构的原子类型，原子类型的值是不可再分解的，如C语言中的基本类型（整型、实型、字符型及指针类型和空类型）；另一类是结构类型，它的成分可以由多个结构类型组成，并可以分解。结构类型的成分可以是非结构的，也可以是结构的。例如，数组的值由若干分量组成，每个分量可以是整数等基本类型，可以是数组等结构类型。

#### 6.抽象数据类型

抽象数据类型（Abstract Data Type， ADT）是指一个数学模型及定义在该模型上的一组操作。抽象数据类型的定义取决于它的一组逻辑特性，而与其在计算机内部如何表示和实现无关。及无论其在内部结构如何变化，只要它的数学特性不变，就不影响其外部的使用。

抽象数据类型和数据类型实质上是一个概念。例如，各种计算机都拥有整数类型就是一个抽象数据类型，尽管它们在不同处理器上的实现方法可以不用，但由于其定义的数学特性相同，在用户看来都是相同的。因此，”抽象“的意义在于数据类型的数学抽象特性。

抽象数据类型的定义可以由一种数据结构和定义在其上的一组操作，而数据结构又包括数据元素及元素之间的关系，因此抽象数据类型一般可以由元素、关系和操作三个要素来定义。

## 算法及算法分析

算法与数据结构的关系非常紧密，在算法设计时总是要先确定相应的数据结构，而在讨论某一种数据结构时也必然会涉及相应的算法。下面就从算法特性、算法描述和算法分析三个方面对算法进行介绍。

### 1.算法特性

算法（Algorithm）是对特定问题求解步骤的一种描述，是指令的有限序列。其中每一条指令表示一个或多个操作。一个算法应该具有下列特性。

> （1）有穷性：一个算法必须在有穷步之后结束，即必须在有限时间内完成。
>
> （2）确定性：算法的每一步必须有确切的定义，无二义性，且在任何条件下算法只有唯一一条执行路径，即对于相同的输入只能得出相同的输出。
>
> （3）可行性：算法的每一步都可以通过已经实现的基本运算的有限执行得以实现。
>
> （4）输入：一个算法具有零个或多个输入，这些输入取自特定的数据对象集合。
>
> （5）输出：一个算法具有一个或多个输出，这些输出同输入之间存在某种特定的关系。

算法的含义与程序十分相似，但又有区别。一个程序不一定满足有穷性。例如，对于操作系统，只要真个系统不遭破坏，它将永远不会停止，即使没有作业需要处理，它仍处于动态等待中。因此，操作系统不是一个算法。另外，程序中的指令必须是机器可执行的，而算法中的指令则无此限制。算法代表了对问题的求解方法，而程序则是算法在计算机上的特定实现。一个算法若用程序设计语言来描述，就是一个程序。

算法与数据结构是相辅相成的。解决某一类特定问题的算法可以选定不同的数据结构，而且选择恰当与否直接影响算法的效率。反之，一种数据结构的优劣由各种算法的执行效果来体现。

在算法设计时通常需要考虑以下几个方面的要求。

> （1）正确性：算法的执行结果应当满足预先规定的功能和性能要求。正确性要求表明算法必须满足实际需求，达到解决实际问题的目标。
>
> （2）可读性：一个算法应当思路清晰、层次分明、简单明了、易读易懂。可读性要求表明算法主要是人与人之间交流解题思路和进行软件设计的工具，因此可读性必须要强。同时一个可读性强的算法，其程序的可维护性、可扩展性都要好得多，因此，许多时候人们往往在一定程度上牺牲效率来提高可读性。
>
> （3）健壮性：当输入不合法数据时，应当适当处理，不至于引起严重后果。健壮性要求表明算法要全面细致地考虑所有可能的边界情况，并对这些边界条件做出完备的处理，尽可能使算法没有意外地情况。
>
> （4）高效性：有效使用存储空间和有较好的时间效率。高效性主要是指时间效率，即解决相同规模的问题时间尽可能短。

一般来说，数据结构上的基本操作主要有以下几种。

> （1）查找：寻找满足特定条件的数据元素所在的位置。
>
> （2）读取：读出指定位置上数据元素的内容。
>
> （3）插入：在指定位置上添加新的元素。
>
> （4）删除：产区指定位置上对应的数据元素。
>
> （5）更新：修改某个数据元素的值。

### 2.算法描述

算法的描述方法很多，根据描述方法的不同，大致可将算法分为以下4种。

> （1）自然语言算法描述：用人类自然语言（如中文、英文）来描述算法，同时还可插入一些程序设计语言中的语句来描述，这种方法也成为非形式算法描述。其优点是不需要专门学习，任何人都可以直接阅读和理解，但直观性很差，复杂的算法难写难读。
>
> （2）框图算法描述：这是一种图示法，可以采用方框图、流程图、N-S图等来描述算法，这种描述方法在算法研究的早期曾流行过。它的优点时主观、易懂，但用来描述比较复杂的算法就显得不够方便，也不够清晰简洁。
>
> （3）伪代码算法描述：如类C语言算法描述。这种算法描述很像程序，但它不能直接在计算机上编译、运行。这种方法很容易编写、阅读算法，而且格式统一，结构清晰，专业设计人员经常使用类C语言来描述算法。
>
> （4）高级程序设计语言编写的程序或函数：这是直接使用高级语言来描述算法，它可在计算机上运行并获得结果，是给定问题能在有限时间内被求解，通常这种算法描述也成为程序。

### 3.算法分析

所谓好的算法，除了满足上文提到的几个基本要求外，还必须以较少的时间与空间代价来解决相同规模的问题。因此，一个算法的优劣，可以从该算法在计算机上运行的时间和所占储存空间来衡量和评判。算法分析就是预先分析算法在实际执行时空代价指标。

当一个算法被转换成程序并在计算机上执行时，其运行所需的时间一般取决于下列几个因素。

> （1）硬件的速度。即主机本身运行速度，主要与CPU的主频和字长有关，也与主机系统采用的技术有关，如堕系统的运算速度一般比单机系统要快。
>
> （2）实现算法的程序设计语言。实现算法的语言的级别越高，起执行效率相对就越低。
>
> （3）编译程序所生成目标代码的质量。代码优化较好的编译程序所生成的程序质量较高。
>
> （4）算法所采用的策略。采用不同设计思路与解题方法，其时空代价是不同的，一般情况下时间指标与空间指标常常是矛盾的两个方面。
>
> （5）问题的规模。例如，求100以内的素数与求1000以内的素数的执行时间必然不同。

显然，在各种因素都不能确定的情况下，很难比较算法的执行时间。也就是说，用算法的绝对执行时间来衡量算法的效率是不合适的。为此，可以将上述各种与计算机相关的软、硬件因素都确定下来，仅对采用不同策略的算法，分析其运行代价随问题规模大小变化的对应关系，即运行代价仅依赖于问题的规模（通常用正整数n表示），或者说它是问题规模的函数。这种函数被称为算法的时间复杂度和空间复杂度。

- 时间复杂度

  一个程序的时间复杂度（Time Complexity）是指该程序运行时间与问题规模的对应关系。一个算法是由控制结构和原操作（所谓原操作是指从算法中选取对于所研究问题是基本运算操作）构成的，其执行时间取决于两者的综合效果。为了便于比较同一问题的不同的算法，通常的做法是：从算法中选取一种对于所研究的问题来说时基本运算的原操作，以该原操作重复执行的次数为算法的时间度量。一般情况下，算法中原操作执行的次数是该算法所处理问题的规模的n的某个函数T(n)。

  常见的渐进时间复杂度有：

  > （1）Olog<sub>2</sub>n，对数级复杂度；
  >
  > （2）O(n)，线性复杂度；
  >
  > （3）O(n<sup>2</sup>)和O(n<sup>3</sup>)，分别为平方级和立方级复杂度；
  >
  > （4）O(2<sup>n</sup>)，指数级复杂度。

  上述时间复杂度随问题规模n的扩大其增长速度是不同的，其增长速度的快慢次序表示如下：

  O(1)<O(log<sub>2</sub>n)<O(n)<O(nlog<sub>2</sub>n)<O(n<sup>2</sup>)<O(n<sup>3</sup>)<O(2<sup>2</sup>)

- 空间复杂度

- 一个程序的空间复杂度（Space Complexity）是指程序运行从开始到结束所需的存储量与问题规模的对应关系，记做：

  S(n)=O(f(n))

  其中n为问题的规模（或大小）。

  一个上机执行的程序除了需要存储空间来寄存本身所用指令、常数、变量和输入数据外，还需要一些对数据进行操作的工作单元和存储为实现计算所需信息的辅助空间。若输入数据所占空间只取决于问题本身、和算法无关，则只需分析除输入和程序之外的额外空间，否则应同时考虑输入数据本身所需空间（和输入数据的表示形式有关）。若额外空间相对于输入数据量来说是常数，则称此算法为原地工作，辅助空间为O(1)。如果所占空间依赖于特定的输入，则除特别指明外，均按最坏情况来分析。

  算法执行时间的耗费和所占存储空间的耗费是相互矛盾的，难以兼得的。即算法执行时间上的节省是以增加存储空间为代价的，反之亦然。不过，一般而言，常常已以算法执行时间作为算法优劣的主要衡量标准。


## 线性表

线性表是最简单、最基本、最常用的一种数据结构，几乎所有线性关系都可以用线性表表示。线性表是线性结构的抽象，线性结构的特点是数据元素之间具有一对一的线性关系，数据元素“一个接一个地排列”。因此，线性表可以想象为一种数据元素的序列。线性表有顺序存储和链式存储两种存储方法，基本操作包括插入、删除和查找等。

### 1.线性表的定义

线性表（Linear List）是一种线性结构。在一个线性表中数据元素的类型相同的，或者说线性表是由同一类型的数据元素构成的线性结构。在实际问题中线性表的例子很多，如学生情况信息表（表中数据元素的类型为学生信息记录类型）、字符串（表中数据元素的类型为字符型）等。

线性表中，除了表头和表尾两个元素，其余元素均具有一个直接前趋结点和直接后继结点。

### 2.线性表的基本操作

数据结构中元素的操作（或称运算）是定义在逻辑结构层次上的，而操作的具体实现是建立在存储结构上的，因此下面定义的线性表的基本操作作为逻辑结构的一部分，每一个操作的具体实现只有在确定了线性表的存储结构之后才能完成。

> （1）数据结构上的基本操作（或运算）不是它的全部操作（或运算），而是一些常用的基本操作（或运算），每一个基本操作（或运算）在实现时也可能根据不同的存储结构派生出一系列相关的操作（或运算）。例如，线性表的查找在链式存储结构中还有按序号查找；再如，插入操作，可能是将新元素插入到某一元素之前，也可能是将新元素插入到某一元素之后，还可能是将新元素插入到其他适当的位置，等等。不可能也没有必要全部定义出一种数据结构的运算集，读者掌握了某一数据结构上的基本运算后，其他运算可以通过基本运算来实现，也可以直接去实现。
>
> （2）在上面各操作中定义的线性表只是一个在逻辑结构层次上抽象的线性表，尚未涉及它的存储结构，因此每个操作在逻辑结构层次上尚不能用具体的程序设计语言写出具体的算法，其算法只有在存储结构确立之后才能用具体程序设计语言实现。
>
> （3）正因为这些操作仅是逻辑上的说明，因此以上用来定义操作的函数中所列的参数的数据类型并不明确说明，只是隐含在函数说明中，对于参数的传递方式也不予考虑，这是因为只有在涉及具体实现时采取明确其参数的数据类型和传递方式。

### 顺序表

顺序表的顺序存储是指在内存中用地址连续的一块存储空间顺序存放线性表中的各数据元素，用这种存储形式存储的线性表称为顺序表。因为内存中的地址空间是线性的，所以用物理位置关系上的相邻实现数据元素之间的逻辑相邻关系既简单又自然。

顺序表具有按数据元素的序号随机存取的特点。

在程序设计语言中，一维数组在内存中占用的存储空间就是一组连续的存储区域，因此，用一维数组来表示顺序表的数据存储区域是在合适不过的了。考虑到线性表有插入、删除等运算，即表长是可变的，因此，数组的容量要设计得足够大。

顺序表实现代码：

```c
C语言实现
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE １00

typedef struct
{
    int data[MAXSIZE];
    int last;
} SeqList;

//顺序表的初始化
SeqList * init_SeqList()
{
    SeqList *L;
    L=malloc(sizeof(SeqList));
    L->last=-１;
    return L;
}

int Insert_SeqList(SeqList *L, int i, int x)
{
    int j;
    if(L->last==MAXSIZE-１)
    {
        printf("顺序表已满");
        return -１;
    }
    if(i<1||i>L->last+２)
    {
        printf("插入位置错误");
        return 0;
    }
    for(j=L->last; j>=i-１; j--)
    {
        L->data[j+１]=L->data[j];
    }
    L->data[i-１]=x;
    L->last++;
    return １;
}

int Delete_SqeList(SeqList *L, int i)
{
    int j;
    if(i<1||i>L->last+１)
    {
        printf("删除错误，不存在第i个元素");
        return 0;
    }
    for(j=i; j<=L->last; j++)
    {
        L->data[j-１]=L->data[j];
    }
    L->last--;
    return １;
}

int Location_SeqList(SeqList *L, int x)
{
    int i=0;
    while(i<=L->last&&L->data[i]!=x)
        i++;
    if(i>L->last)
        return -１;
    else
        return i;
}

//以a1为界，a1前面的值均比a1小，a1后面的值均比a1大
void Partition_SeqList(SeqList *L)
{
    int i,j;
    int x,y;
    x=L->data[0];
    for(i=1; i<=L->last; i++)
    {
        if(L->data[i]<x)
        {
            y=L->data[i];
            for(j=i-１; j>=0; j--)
                L->data[j+１]=L->data[j];
            L->data[0]=y;
        }
    }
}
//有序表的合并算法
void Merge_SeqList(SeqList A, SeqList B, SeqList *C)
{
    int i=0, j=0, k=0;
    while(i<=A.last&&j<=B.last)
    {
        if(A.data[i]<B.data[j])
        {
            C->data[k++]=A.data[i++];
        }
        else
            C->data[k++]=B.data[j++];
    }
    while(i<=A.last)
        C->data[k++]=A.data[i++];
    while(j<=B.last)
        C->data[k++]=B.data[j++];
    C->last=k-１;
}

//打印顺序表
void Printall_SeqList(SeqList *L)
{
    int i=0;
    for(; i<=L->last; i++)
        if(i!=L->last)
            printf("%d, ", L->data[i]);
        else
            printf("%d", L->data[i]);
}

int main()
{
    SeqList *L;
    int i=1;
    L=init_SeqList();
    for(; i<=20; i++)
        Insert_SeqList(L, i, i);
    printf("打印当前顺序表：\n");
    Printall_SeqList(L);
    printf("\n");
    printf("元素５的下标是：%d\n", Location_SeqList(L, ５));
    Delete_SqeList(L, ４);
    printf("删除第５个元素之后：\n");
    Printall_SeqList(L);
    return 0;
}
```

```python
# Python语言实现
class InsertError(Exception):
    pass


class DeleteError(Exception):
    pass


class SeqList:
    def __init__(self):
        self.MAXSIZE = １00
        self.data = [None] * self.MAXSIZE
        self.last = -１

    def Insert_SeqList(self, i, x):
        if self.last == self.MAXSIZE:
            raise InsertError("顺序表已满")
        if i < １ or i > self.last + ２:
            raise InsertError("插入位置错误")
        for j in range(self.last, i - １, -１):
            self.data[j + １] = self.data[j]
        self.data[i - １] = x
        self.last += １

    def Delete_SeqList(self, i):
        if i < １ or i > self.last + １:
            raise DeleteError("删除元素的位置错误")

    def Location_SeqList(self, x):
        for i in range(0, self.last):
            if self.data[i] == x:
                return i
        return "元素未找到"

    def Partition_SeqList(self):
        x = self.data[0]
        for i in range(１, self.last + １):
            if self.data[i] < x:
                y = self.data[i]
                for j in range(i - １, -１, -１):
                    self.data[j + １] = self.data[j]
                self.data[0] = y

    def Print_SeqList(self):
        for i in range(0, self.last + １):
            if i != self.last:
                print(self.data[i], end=", ")
            else:
                print(self.data[i], end="")


if __name__ == "__main__":
    A = SeqList()
    for i in range(１, ２0):
        A.Insert_SeqList(i, i)
    A.Print_SeqList()
```

### 线性表的链式存储及其操作的实现

由于顺序表的存储特点是用物理上的相邻关系实现逻辑上的相邻关系，它要求用连续的存储单元顺序存储线性表中各元素，因此，在对顺序表插入、删除时，需要通过移动数据元素来实现，影响了运行效率。线性表的链式存储结构，它不需要用地址连续的存储单元来实现，因为它不要求逻辑上相邻的两个数据元素在物理上也相邻。在链式存储结构中，数据元素之间的逻辑关系是通过"链"来连接的，因此对线性表的插入、删除不需要移动数据元素。

#### 1.单链表

链表是通过一组任意的存储单元来存储线性表中的数据元素的。

```C
//C语言实现
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} LNode, *LinkList;

//单链表的建立算法（头部插入）
LinkList Create_LinkList1()
{
    LinkList L=NULL;
    LNode *s;
    int x;
    scanf("%d", &x);
    while(x!=0)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=L;
        L=s;
        scanf("%d", &x);
    }
    return L;
}

//单链表的建立算法（尾部插入）
LinkList Create_LinkList2()
{
    LinkList L=NULL;
    LNode *s, *R=NULL;
    int x;
    scanf("%d", &x);
    while(x!=0)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        if(L==NULL)
            L=s;
        else
            R->next=s;
        R=s;
        scanf("%d", &x);
    }
    if(R!=NULL)
        R->next=NULL;
    return L;
}

//带头结点的单链表的建立算法（头部插入）
LinkList Create_LinkList4()
{
    LinkList L;
    LNode *R;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d", &x);
    while(x!=0)
    {
        R=malloc(sizeof(LNode));
        R->data=x;
        R->next=L->next;
        L->next=R;
        scanf("%d", &x);
    }
    return L;
}

//带头结点的单链表的建立算法(尾部插入）
LinkList Create_LinkList3()
{
    LinkList L;
    LNode *R;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    R=L;
    scanf("%d", &x);
    while(x!=0)
    {
        R->next=malloc(sizeof(LNode));
        R->next->data=x;
        R=R->next;
        scanf("%d", &x);
    }
    R->next=NULL;
    return L;
}

//打印不带头结点的单链表
void Print_LinkList1(LinkList L)
{
    LNode *p;
    p=L;
    while(p!=NULL)
    {
        if(p->next!=NULL)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p=p->next;
    }
}

//打印带头结点的单链表
void Print_LinkList2(LinkList L)
{
    LNode *p;
    p=L->next;
    while(p!=NULL)
    {
        if(p->next!=NULL)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p=p->next;
    }
}

//求不带头结点的单链表的长度算法
int Length_LinkList1(LinkList L)
{
    LNode *p=L;
    int j=0;
    while(p)
    {
        j++;
        p=p->next;
    }
    return j;
}

//求带头结点的单链表的长度算法
int Length_LinkList2(LinkList L)
{
    LNode *p=L;
    int j=0;
    while(p->next)
    {
        j++;
        p=p->next;
    }
    return j;
}

//不带头结点单链表按序号查找元素算法
LNode *Get_LinkList1(LinkList L, int i)
{
    LNode *p=L;
    int j=1;
    while(p!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j==i)
        return p;
    return NULL;
}

//带头结点单链表按序号查找元素算法
LNode *Get_LinkList2(LinkList L, int i)
{
    LNode *p=L->next;
    int j=1;
    while(p!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j==i)
        return p;
    return NULL;
}


//不带头结点单链表的元素定位算法
LNode *Locate_LinkList1(LinkList L, int x)
{
    LNode *p=L;
    while(p!=NULL&&p->data!=x)
        p=p->next;
    return p;
}

//带头结点单链表的元素定位算法
LNode *Locate_LinkList2(LinkList L, int x)
{
    LNode *p=L->next;
    while(p!=NULL&&p->data!=x)
        p=p->next;
    return p;
}

//不带单链表的元素插入算法
int Insert_LinkList1(LinkList *L, int i, int x)
{
    LNode *p, *s;
    int length;
    length = Length_LinkList1(*L);
    //printf("%d\n", length);
    if(i<1||i>length+１)
        return 0;
    if(i==1)
    {
        /*
        对第一个结点进行的操作需要使
        用二级指针，否则头指针不改变
        */
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=*L;
        *L=s;
        return １;
    }
    else
    {
        p=Get_LinkList1(*L, i-１);
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=p->next;
        p->next=s;
        return １;
    }
}

//带头结点的单链表的插入算法
int Insert_LinkList2(LinkList L, int i, int x)
{
    LNode *p, *s;
    int length;
    length = Length_LinkList2(L);
    if(i<1||i>length+１)
        return 0;
    if(i==1)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        return １;
    }
    else
    {
        p=Get_LinkList2(L, i-１);
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=p->next;
        p->next=s;
        return １;
    }
}

//不带头结点的单链表的元素删除算法
int Delete_LinkList1(LinkList *L, int i)
{
    LinkList p, s;
    p=Get_LinkList1(*L, i-１);
    if(i==1&&*L)
    {
        LinkList q;
        q=*L;
        *L=(*L)->next;
        free(q);
        return １;
    }
    if(p==NULL)
    {
        printf("第i-１个结点不存在\n");
        return -１;
    }
    else if(p->next==NULL)
    {
        printf("第i个结点不存在\n");
        return 0;
    }
    else
    {
        s=p->next;
        p->next=s->next;
        free(s);
        return １;
    }
}

//带头结点的单链表的元素删除算法
int Delete_LinkList2(LinkList L, int i)
{
    LinkList p, s;
    if(i==1&&L->next)
    {
        p=L->next;
        L->next=L->next->next;
        free(p);
    }
    else
    {
        p=Get_LinkList2(L, i-１);
        if(!p)
        {
            printf("第i-１个结点不存在\n");
            return -１;
        }
        else if(!p->next)
        {
            printf("第i个结点不存在\n");
            return 0;
        }
        else
        {
            s=p->next;
            p->next=s->next;
            free(s);
            return １;
        }
    }
    return １;
}

//带头结点单链表去重算法
void Pur_LinkList(LinkList L)
{
    LNode *p, *q, *r;
    //链表为空
    if(!L->next)
        return;
    p=L->next;/*p指向第一个结点*/
    while(p)
    {
        q=p;
        while(q->next)
        {
            if(q->next->data==p->data)
            {
                r=q->next;
                q->next=r->next;
                free(r);
            }
            else
                q=q->next;
        }
        p=p->next;
    }
}


int main()
{
    LinkList L;
    L = Create_LinkList4();
    Print_LinkList2(L);
    Delete_LinkList2(L, ４);
    printf("\n");
    Print_LinkList2(L);
    return 0;
}
```

#### 2.循环链表

对于带头结点的单链表而言，最后一个结点的指针域是空指针，如果将该链表头指针置入该指针域，则使得链表头尾结点相连，构成了单循环链表

在单循环链表上的操作基本与非循环链表相同，只是将原来判断指针是否为NULL变为判断指针是否为头指针而已，没有其他较大的变化。

对于单链表，只能从头结点开始遍历整个链表；而对于单循环链表，则可以从表中任意结点开始遍历整个链表。不仅如此，有时对链表常做的操作是在表尾、表头进行的，此时可以改变一下链表的标识方法，不用头指针而用一个指向尾结点的指针R来标识，这样在许多时候可以提高操作效率。

```C
//保存头指针的单循环表C语言实现
#include<stdlib.h>
#include<stdio.h>

typedef struct cLNode
{
    int data;
    struct cLNode *next;
} CLNode, *CLinkList;

//带头结点循环单链表建立算法（头部插入）
CLinkList Create_CLinkList1()
{
    CLinkList L;
    CLNode *q, *s;
    int x;
    L = (CLinkList)malloc(sizeof(CLNode));
    L->next = NULL;
    scanf("%d", &x);
    while(x!=0)
    {
        q=malloc(sizeof(CLNode));
        q->data=x;
        if(!L->next)
            s=q;
        q->next=L->next;
        L->next=q;
        s->next=q;
        scanf("%d", &x);
    }
    return L;
}

//带头结点循环单链表建立算法（尾部插入）
CLinkList Create_CLinkList2()
{
    CLinkList L;
    CLNode *q;
    int x;
    L = malloc(sizeof(CLNode));
    L->next=NULL;
    q=L;
    scanf("%d", &x);
    while(x!=0)
    {
        q->next=malloc(sizeof(CLNode));
        q->next->data=x;
        q=q->next;
        scanf("%d", &x);
    }
    q->next=L->next;
    return L;
}

//打印带头结点循环单链表算法
void Print_CLinkList(CLinkList L)
{
    CLNode *p;
    p=L->next;
    while(１)
    {
        if(p->next==L->next)
        {
            printf("%d", p->data);
            break;
        }
        else
        {
            printf("%d, ", p->data);
        }
        p=p->next;
    }
}


//单循环链表长度
int Length_CLinkList(CLinkList L)
{
    CLNode *p;
    int count = 0;
    p=L->next;
    while(p->next&&p->next!=p)
    {
        count++;
        p=p->next;
    }
    return count;
}

int main()
{
    CLinkList A;
    A=Create_CLinkList1();
    printf("链表输出\n");
    Print_CLinkList(A);
    return 0;
}
```

#### 3.双向链表

单链表的结点中只有一个指向其后继结点的指针域next，因此，若已知某结点的指针为p，其后继结点的指针为p->next，而找到其前趋则只能从该链表的头指针开始，顺着各结点的next域前行，也就是说，找后继的时间复杂度是O(1)，而找前趋的时间复杂度是O(n)，如果希望找前趋的时间复杂度达到O(1)，则只能付出空间的代价：每个结点再加一个指向前趋的指针域。

```C
//带头结点的双向链表C语言实现
#include<stdlib.h>
#include<stdio.h>

typedef int datatype;
typedef struct dLNode
{
    datatype data;
    struct dLNode *prior, *next;
} DLNode, *DLinkList;

//带头结点双向链表的建立算法（头部插入）
DLinkList Create_DLinkList2()
{
    DLinkList L;
    int x;
    DLNode *p;
    L=(DLinkList)malloc(sizeof(DLNode));
    L->prior=NULL;
    L->next=NULL;
    scanf("%d", &x);
    while(x!=0)
    {
        p=malloc(sizeof(DLNode));
        p->data=x;
        p->next=L->next;
        if(p->next)
            p->next->prior=p;
        L->next=p;
        L->next->prior=L;
        scanf("%d", &x);
    }
    return L;
}

//带头结点双向链表的建立算法（尾部插入）
DLinkList Create_DLinkList1()
{
    DLinkList L;
    DLNode *p;
    int x;
    L=(DLinkList)malloc(sizeof(DLNode));
    L->next=NULL;
    L->prior=NULL;
    p=L;
    scanf("%d", &x);
    while(x!=0)
    {
        p->next=malloc(sizeof(DLNode));
        p->next->data=x;
        p->next->prior=p;
        p=p->next;
        scanf("%d", &x);
    }
    p->next=NULL;
    return L;
}

//打印带头结点的双向链表
void Print_DLinkList(DLinkList L)
{
    DLNode *p;
    p=L->next;
    while(p)
    {
        if(p->next)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p=p->next;
    }
}

int main()
{
    DLinkList L;
    L=Create_DLinkList2();
    Print_DLinkList(L);
    return 0;
}
```

## 栈

### 1.栈

栈（Stack）是限制在表的一端进行插入和删除操作的线性表。允许进行插入、删除操作的这一端称为顶（Top），另一个固定端称为栈底。当表中没有元素时称为空战。栈又称为“后进先出”（Last-In-First-Out，LIFO）或“先进后出”（FIrst-In-Last-Out，FILO）的线性表，简称“LIFO表”或“FILO”表。

#### 顺序栈

利用顺序存储方式来实现的栈称为顺序栈。类似于顺序表的定义，栈中的数据元素用一个预设的足够长度的一维数组来实现。

```C
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE １00

typedef int datatype;
typedef struct
{
    datatype data[MAXSIZE];
    int top;
} SeqStack;

SeqStack * Init_SeqStack()
{
    SeqStack *s;
    s=malloc(sizeof(SeqStack));
    s->top=-１;
    return s;
}

int Empty_SeqStack(SeqStack *s)
{
    if(s->top==-１)
        return １;
    return 0;
}

int Push_SeqStack(SeqStack *s, datatype x)
{
    if(s->top==MAXSIZE-１)
        return 0;
    s->top++;
    s->data[s->top]=x;
    return １;
}

int Pop_SeqStack(SeqStack *s)
{
    int temp;
    if(Empty_SeqStack(s))
        return 0;
    temp=s->data[s->top];
    s->top--;
    return temp;
}

int Top_SeqStack(SeqStack *s)
{
    if(Empty_SeqStack(s))
        return 0;
    return s->data[s->top];
}

int main()
{
    SeqStack *s;
    int i,j,k;
    s=Init_SeqStack();
    Push_SeqStack(s, １);
    Push_SeqStack(s ,２);
    Push_SeqStack(s, ３);
    i=Pop_SeqStack(s);
    j=Pop_SeqStack(s);
    k=Pop_SeqStack(s);
    printf("%d %d %d", i, j, k);
    return 0;
}
```

链栈

用链式存储结构实现的栈称为链栈。通常链栈用单链表表示，因为其结点结构与单链表的结点结构相同。

```C
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
} StackNode, *LinkStack;

LinkStack Init_LinkStack()
{
    return NULL;
}

int Empty_LinkStack(LinkStack top)
{
    if(top==NULL)
        return １;
    return 0;
}

LinkStack Push_LinkStack(LinkStack top, datatype x)
{
    StackNode *s;
    s=malloc(sizeof(StackNode));
    s->data=x;
    s->next=top;
    top=s;
    return top;
}

LinkStack Pop_LinkStack(LinkStack top, datatype *x)
{
    StackNode *p;
    if(top==NULL)
        return NULL;
    *x=top->data;
    p=top;
    top=top->next;
    free(p);
    return top;
}

int main()
{
    LinkStack top;
    int i, j ,k;
    top=Init_LinkStack();
    top=Push_LinkStack(top, １);
    top=Push_LinkStack(top, ２);
    top=Push_LinkStack(top, ３);
    top=Pop_LinkStack(top, &i);
    top=Pop_LinkStack(top, &j);
    top=Pop_LinkStack(top, &k);
    printf("%d %d %d", i, j, k);
    return 0;
}
```

## 队列

#### 1.队列的定义

队列是一种“先进先出”（First-In-First-Out）的数据结构。插入在表一端进行，而删除在表的另一端进行，这种数据结构被称为队列。队尾是允许插入的一端，队头是允许删除的一端。

#### 顺序队

```C
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef int datatype;
typedef struct
{
    datatype data[MAXSIZE];
    int front, rear;
    int num;
} SeQueue;

SeQueue * Init_SeQueue()
{
    SeQueue *q;
    q=malloc(sizeof(SeQueue));
    q->front=q->rear=-1;
    q->num=0;
    return q;
}

int In_SeQueue(SeQueue *q, datatype x)
{
    if(q->num==MAXSIZE)
    {
        printf("队列已满");
        return -1;
    }
    q->rear=(q->rear+1)%MAXSIZE;
    q->data[q->rear]=x;
    q->num++;
    return 1;
}

int Out_SeQueue(SeQueue *q, datatype *x)
{
    if(q->num==0)
    {
        printf("队列为空");
        return -1;
    }
    q->front=(q->front+１)%MAXSIZE;
    *x=q->data[q->front];
    q->num--;
    return 1;
}

int Empty_SeQueue(SeQueue *q)
{
    if(q->num==0)
        return 1;
    return 0;
}

int main()
{
    SeQueue *q;
    int i, j;
    q=Init_SeQueue();
    printf("队列是否为空：%d\n", Empty_SeQueue(q));
    In_SeQueue(q, 1);
    In_SeQueue(q, 2);
    Out_SeQueue(q, &i);
    Out_SeQueue(q, &j);
    printf("出队元素：%d %d", i, j);
    return 0;
}
```

#### 链队列

```C
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
} QNode;

typedef struct
{
    QNode *front, *rear;
} LQueue;

LQueue *Init_LQueue()
{
    LQueue *q;
    QNode *p;
    q=malloc(sizeof(LQueue));
    p=malloc(sizeof(QNode));
    p->next=NULL;
    q->front=p;
    q->rear=p;
    return q;
}

void In_LQueue(LQueue *q, datatype x)
{
    QNode *p;
    p=malloc(sizeof(QNode));
    p->data=x;
    p->next=NULL;
    q->rear->next=p;
    q->rear=p;
}

int Empty_LQueue(LQueue *q)
{
    if(q->front==q->rear)
        return １;
    return 0;
}

int Out_LQueue(LQueue *q, datatype *x)
{
    QNode *p;
    if(Empty_LQueue(q))
    {
        printf("队列为空\n");
        return 0;
    }
    p=q->front->next;
    q->front->next=p->next;
    *x=p->data;
    free(p);
    if(q->front->next==NULL)
        q->rear=q->front;
    return １;
}

int main()
{
    LQueue *p;
    int i, j;
    p=Init_LQueue();
    printf("队列是否为空%d\n", Empty_LQueue(p));
    In_LQueue(p, １);
    In_LQueue(p, ２);
    Out_LQueue(p, &i);
    printf("%d %d", i);
    printf("\n队列是否为空%d", Empty_LQueue(p));
    return 0;
}
```

## 串和数组

串（即字符串）也是一种特殊的线性表，其特殊性在于数据元素仅由一个个字符组成。作为一种基本数据类型，字符在计算机信息处理中意义非同一般，计算机非数值处理的对象经常是字符串数据，如在汇编和高级语言的汇编程序中，源程序和目标程序都是字符串数据；在事务处理程序中，顾客的姓名、地址、货物的产地、名称等，一般也是作为字符串处理的。另外，串还具有自身的特性，常常把一个串作为一个整体来处理，因此，把串作为独立结构的概念加以研究是非常必要的。事实上，几乎所有的程序设计语言都能支持串的存储和串的基本运算，在实际应用中一般也都直接引用。

数组可视为线性表的推广，其特点是表中数据元素仍然是一个表。当然，从本质上看，维数大于1的数组中数据元素之间不再是简单的一对一关系，因此，严格地说多维数组是非线性的。然而，由于数组中数据元素类型的一致性和其内部结构上的同一性，在实际处理数组时可以借助线性表的方法来实现数组及其运算。

数组（Array）是一种数据结构，高级语言一般都支持数组这种数据类型。数组作为一种数据结构，其特点是结构中的元素本身可以是具有某种结构的数据，但属于统一数据类型。从逻辑结构上，可以把数组看作一般线性表的扩充。

```C
//稀疏矩阵的建立
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE １00

typedef int datatype;
typedef struct
{
    int i, j;/*非零元素的行，列*/
    datatype v;/*非零元素的值*/
} SPNode;
typedef struct
{
    int mu, nu, tu;/*矩阵的行，列及非零元素的个数*/
    SPNode datatype[MAXSIZE];/*三元组表*/
} SPMatrix;

SPMatrix Create_SPMatrix()
{
    int i, j;
    int x;
    SPMatrix L;
    int count=1;
    scanf("%d", &L.mu);//输入行
    scanf("%d", &L.nu);//输入列
    scanf("%d", &L.tu);//输入非零元素的个数
    for(i=1;i<=L.mu;i++)
        for(j=1;j<=L.nu;j++)
        {
            scanf("%d", &x);
            if(x!=0)
            {
                L.datatype[count].i=i;
                L.datatype[count].j=j;
                L.datatype[count].v=x;
                count++;
            }
        }
    return L;
}

int main()
{
    SPMatrix L;
    L=Create_SPMatrix();
    Print(L);
    printf("\n");
    L=TransM1(L);
    Print(L);
    return 0;
}
```

## 树

线性结构中结点具有唯一前趋和唯一后继的关系，而非线性结构中结点之间的关系不再具有这种唯一性。其中，树形结构中结点间的关系是前趋唯一而后继不唯一，即元素之间是一对多的关系；在图结构中结点之间的关系是前趋、后继均不唯一，因此也就无所谓前趋、后继了。直观地看，树形结构既有分支关系，又具有层次关系，它非常类似于自然界中的树。树形结构在现实世界中广泛存在，如家谱、各单位的行政机构等都可用树来表示。树在计算机领域中也有着广泛的应用，DOS和Windows操作系统中对磁盘文件的管理就采用了树形目录结构；在数据中，树形结构也是数据的重要组织形式之一。

#### 树的定义

树（Tree）是n（n≥0）个结点的优先集合。当n=0时，称这棵树为空树；当n>0时，该集合满足以下条件：

（1）有且只有一个特殊的结点称为树的根（root），根结点没有直接前趋结点，但有零个或多个直接后继结点（这里的前趋、后继暂时沿用线性表中的概念，在树中，前趋、后继其实是另外的术语）。

（2）除根结点之外的其余n-1个结点被分成m（m>0）个互不相交的集合T<sub>1</sub>，T<sub>2</sub>，.....，T<sub>m</sub>，其中每一个集合T<sub>i</sub>（1≤i≤m）本身又是一棵树。树T<sub>1</sub>，T<sub>2</sub>，.....T<sub>m</sub>称为根结点的子树。

相关术语：

> （1）结点：包含一个数据元素及若干指向其他结点的分支信息的数据结构。
>
> （2）结点的度：结点所拥有的子树的个数称为该结点的度。
>
> （3）叶子结点：度为0的结点称为叶子结点，或者称为终端结点。
>
> （4）分支结点：度不为0的结点称为分支结点，或者称为非终端结点。一棵树的结点除叶子结点外，其余的结点都是分支结点。
>
> （5）孩子结点、双亲结点、兄弟结点：树中一个结点的子树的根结点称为这个结点的孩子结点，这个结点称为它孩子结点的双亲结点。具有用一个双亲结点的孩子结点称为兄弟结点。
>
> （6）路径、路径长度：设n<sub>1</sub>, n<sub>2</sub>, …, n<sub>k</sub>为一棵树的结点序列，若结点n<sub>i</sub>是n<sub>i+1</sub>的双亲结点（1≤i <k），则把n<sub>1</sub>, n<sub>2</sub>, …, n<sub>k</sub>称为一条由n<sub>1</sub>至n<sub>k</sub>的路径。这条路径的长度是k-1。
>
> （7）祖先、子孙：在树中，如果有一条路径从结点M到结点N，那么M就成为N的祖先，而N称为M的子孙。
>
> （8）结点的层次：规定树的根结点的层数为1，其余结点的层数的关于它的双亲结点的层数加1。
>
> （9）树的深度（高度）：定义一棵树的根结点层次为1，其它结点的层次是父节点层次加1。一颗树中所有的结点层次的最大值成为这棵树的深度。
>
> （10）树的度：树中的所有结点的度的度的最大值称为该树的度。
>
> （11）有序树和无序树：如果一棵树中结点的各子树从左到右是有次序的，即若交换了某结点各子树的相对位置，则构成不同的树，称这棵树为有序树；反之，则称为无序树。
>
> （1２）森林：m（m≥0）棵不相交地树的集合称为森林。自然界中树和森林是不同的概念，但在数据结构中，树和森林只有很小的差别。任何一颗树，删去根结点就变成了森林；反之，给森林增加一个统一的根结点，森林就变成了一棵树。

#### 二叉树的基本概念

二叉树（Binary Tree）是n个结点的有限集合，该集合或者为空，或者由一个称为根（Root）的结点及两个不相交的，被分别称为根结点的左子树和右子树的二叉树组成。当集合为空时，称该二叉树为空二叉树。

一棵二叉树的每个结点只能含有0、1或2个孩子结点，而且其孩子结点有左右之分，位于左边的称为左孩子，位于右边的称为右孩子。显然，二叉树是有序的，若将其左、右孩子颠倒，就成为另一颗不同的二叉树。即使二叉树中的结点只有一棵子树，也要区分它是左子树还是右子树。

###### 二叉树的相关概念

> （1）满二叉树
>
> 在一棵二叉树中，如果所有分支结点都存在于左子树和右子树，并且所有叶子结点都在同一层上，这样的一棵二叉树称为满二叉树。
>
> （2）完全二叉树
>
> 一颗深度为k的有n个结点的二叉树，对树中的结点按从上至下，从左至右的顺序进行编号，如果编号为i（1≤i≤n）的结点与满二叉树中编号为i的结点在二叉树中位置相同，则这棵二叉树称为完全二叉树。完全二叉树的特点是：叶子结点只能出现在最下层和次下层，且最下层的叶子结点集中在树的左部。显然，一颗满二叉树必定是一颗完全二叉树。

###### 二叉树的主要性质

>（1）一颗非空二叉树的第i层最多有2<sup>i-1</sup>个结点（i≥1）。
>
>（2）一颗深度为k的二叉树中，最多具有2<sup>k-1</sup>个结点。
>
>（3）对于一颗非空的二叉树，如果叶子结点树为n<sub>0</sub>，度数为2的结点数为n<sub>2</sub>，则有n<sub>0</sub>=n<sub>2</sub>+1。
>
>（4）具有n个结点的完全二叉树的深度不超过log<sub>2</sub>+1。

#### 二叉树的存储结构与基本操作

##### 1.二叉树的顺序存储结构

二叉树的顺序存储，就是用一组连续的存储单元存放二叉树中的结点。一般按照二叉树结点从上至下，从左至右的顺序存储。这样结点在存储位置上的前趋后继关系并不一定就是它们在逻辑上的邻接关系，然而只有通过一些方法确定某结点在逻辑上的双亲结点和孩子结点，这种存储才有意义。因此，依据二叉树的性质，完全二叉树和满二叉树采用顺序存储比较合适，树中结点的序号可以唯一地反映出结点之间的逻辑关系，这样既能最大限度的节省存储空间，又可以利用数组元素的下标值确定结点在二叉树中的为位置及结点之间的关系。

##### 2.二叉树的链式存储结构与遍历

二叉树的遍历有三种方式：

> （1）DLR（前序遍历或先序遍历）
>
> （2）LDR（中序遍历）
>
> （3）LRD（后序遍历）

###### 1.先序遍历

先序遍历（DLR）的递归过程为：若二叉树为空，便利结束。否则：

（1）访问根结点；

（2）先序遍历根结点的左子树；

（3）先序遍历根结点的右子树。

###### 2.中序遍历

中序遍历（LDR）的递归过程为：若二叉树为空，遍历结束。否则：

（1）中序遍历根结点的左子树；

（2）访问根结点；

（3）中序遍历根结点的右子树。

###### 3.后序遍历

后序遍历（LRD）的递归过程为：若二叉树为空，遍历结束。否则：

（1）后序遍历根结点的左子树；

（2）后序遍历根结点的右子树；

（3）访问根结点。

```C
#include<stdio.h>
#include<stdlib.h>

typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//先序序列建立二叉树
void Create_BiTree(BiTree *L)
{
    int x;
    scanf("%d", &x);
    if(x==0)
        *L=NULL;
    else
    {
        *L=(BiTree)malloc(sizeof(BiTNode));
        (*L)->data=x;
        Create_BiTree(&(*L)->lchild);
        Create_BiTree(&(*L)->rchild);
    }
}

//先序遍历
void Print_BiTree(BiTree L)
{
    if(L)
    {
        printf("%d ",L->data);
        Print_BiTree(L->lchild);
        Print_BiTree(L->rchild);
    }
}

//求二叉树的深度算法
int Length_BiTree(BiTree L)
{
    int lh, rh, h;
    if(L==NULL)
        h=0;
    else
    {
        lh=Length_BiTree(L->lchild);
        rh=Length_BiTree(L->rchild);
        h=lh>rh?lh+1:rh+1;
    }
    return h;
}

//求二叉树的叶子结点算法
int CountLeaf_BiTree(BiTree L)
{
    if(L==NULL)
        return 0;
    else if(L->lchild==NULL&&L->rchild==NULL)
        return 1;
    return CountLeaf_BiTree(L->lchild) + CountLeaf_BiTree(L->rchild);
}

int main()
{
    BiTree L;
    Create_BiTree(&L);
    printf("叶子结点%d", CountLeaf_BiTree(L));
    return 0;
}
```

#### 树与森林

##### 1.树的存储

在计算机中，树的存储有多种方式，及可以采用顺序存储结构，但无论采用存储方式，都要求存储结构不但能存储各结点本身的数据信息，还要能唯一地反映树中各结点之间地逻辑关系。

###### 双亲表示法

由树地定义可以知道，树中的每个结点（除根结点外）都有唯一的一个双亲结点，根据这一特性，可用一组连续的存储空间（一维数组）存储树中的各个结点，数组中的一个元素表示树中的一个结点，数组中的一个元素表示树中的一个结点，数组元素为结构体类型，其中包括结点本身的信息及该结点的双亲结点在数组中的序号，树的这种存储方法称为双亲表示法。

###### 孩子表示法

其主体是一个与结点个数一样大小的一维数组，数组的每一个元素都由两个域组成；一个域用来存放结点本身的信息；另一个用来存放指针，该指针指向有该结点孩子组成的单链表的首位置。单链表的基本结构也由两个域组成；一个存放孩子结点在一维数组中的序号；另一个是指针域，指向下一个孩子。

###### 孩子兄弟表示法

这是一种常用的存储结构，其方法是：在树中，每个结点除其信息域外，再增加两个分别指向该结点的第一个孩子节点和右兄弟结点的指针。

##### 2.树的遍历

- 先根遍历
- 后根遍历

##### 3.森林的遍历

森林的遍历有前序遍历和中序遍历两种方式。

###### 1.前序遍历

访问森林中第一棵树的根结点，前序遍历第一棵树的根结点的子树，前序遍历去掉第一棵树后的子森林。

###### 2.中序遍历

中序遍历第一棵树的根结点的子树，访问森林中第一棵树的根结点，中序遍历去掉第一棵树后的子森林。

#### 最优二叉树-----哈夫曼树

最优二叉树也称哈夫曼树（Huffman）树，是指对于一组带有确定权值的叶子结点，构造的具有最小带权路径长度的二叉树。权值是值一个特定节点相关的数值。

## 图

### 1.图的定义和术语

#### 图的定义

图（Graph）是由非空的顶点集合和一个描述顶点之间的关系——边（或者弧）和集合组成的。

#### 图的相关术语

1. 无向图

   在一个图中，如果任意两个顶点的偶对（v<sub>i</sub>，v<sub>j</sub>）∈E是无序的，即顶点之间的连线是没有方向的，则称该图为无向图。

2. 有向图

   在一个图中，如果任意两个顶点构成的偶对<v<sub>i</sub>，v<sub>j</sub>>∈E是有序的，即顶点之间的连线时有方向的，则称该图为有向图。

3. 顶点、边、弧、弧头、弧尾

   在图中，数据元素v<sub>i</sub>称为顶点（Vertex）；（v<sub>i</sub>，v<sub>j</sub>）表示再顶点v<sub>i</sub>和v<sub>j</sub>之间有一条直接连线。如果是在无向图中，则称这条线为边；如果是在有向图中，一般称这条线为弧。边用顶点的无序偶对（v<sub>i</sub>，v<sub>j</sub>）来表示，称顶点v<sub>i</sub>和顶点v<sub>j</sub>互为邻接点，边（v<sub>i</sub>，v<sub>j</sub>）依附于顶点v<sub>i</sub>与顶点v<sub>j</sub>；弧用顶点的有序偶对<v<sub>i</sub>，v<sub>j</sub>>来表示，有序偶对的第一个结点v<sub>i</sub>被称为始点（或弧尾），在图中就是不带箭头的一段；有序偶对的第二个结点v<sub>j</sub>被称为终点（或弧头），在图中就是带箭头的一端。

4. 无向完全图

   在一个无向图中，如果任意两个顶点都有一条直接边相连，则称该图为无向完全图。可以证明，在一个含有n个顶点的无向完全图中，有n(n-1)/2条边。

5. 有向完全图

   在一个有向图中，如果任意两个顶点之间，如果任意两个顶点之间都有方向互为相反的两条弧相连接，则称该图为有向完全图。在一个含有n个顶点的有向完全图中，有n(n-1)条边。

6. 顶点的度、入度、出度

   顶点的度（Degree）是指依附于某顶点v的边数，通常记为TD(v)。在有向图中，要区别顶点的入度与出度的概念。顶点v的入度是指以顶点v为终点的弧的数目，记为ID(v)；顶点v出度是指以顶点v为始点的弧的数目，记为OD(v)。有TD(v)=ID(v)+OD(v)。

7. 边的权、网

   与边有关的数据信息称为权（Weight）。在实际应用中，权值可以有某种含义。例如，在一个反应城市交通线路的图中，边上的权值可以表示该条线路的长度或等级；对于一个电子线路图，边上的权值可以表示两个端点之间的电阻、电流或电压值；对于反映工程进度的图而言，边上的权值可以表示从前一个工程到后一个工程所需要的时间或其他代价等。边上带权的图称为网或网络（Network）。

8. 路径、路径长度

   顶点v<sub>p</sub>到顶点v<sub>q</sub>之间的路径（Path）是指顶点序列v<sub>p</sub>，v<sub>i1</sub>，v<sub>i2</sub>，...，v<sub>im</sub>，v<sub>q</sub>。其中，（v<sub>p</sub>，v<sub>i1</sub>），（v<sub>i1</sub>，v<sub>i2</sub>），...，（v<sub>im</sub>，v<sub>q</sub>）分别为图中的边。路径上边的数目称为路径长度。

9. 简单路径、回环、简单回路

   序列中顶点不重复出现的路径称为简单路径。出第一个顶点与最后一个顶点之外，其他顶点不重复出现的回路称为简单回路，或者简单环。

10. 子图

    对于图G=(V，E)，G'=(V，E)，若存在V'是V的子集、E'是E的子集，则称图G'是G的一个子图。

11. 连通、连通图、连通分量

    在无向图中，如果从一个顶点v<sub>i</sub>到另一个顶点v<sub>j</sub>(i≠j)存在的路径，则称顶点v<sub>i</sub>和v<sub>j</sub>是连通的。如果图中任意两个顶点都是连通的，则称该图是连通图。无向图的极大连通子图称为连通分量，极大连通子图是指在保证连通与子图的条件下，包含原图中所有的顶点与边。

12. 强连通图、强连通分量

    对于有向图来说，若图中任意一对顶点v<sub>i</sub>和v<sub>j</sub>(i≠j)均存在从一个顶点v<sub>i</sub>到另一个顶点v<sub>j</sub>和从v<sub>j</sub>到v<sub>i</sub>的路径，则称该有向图是强连通图。有向图的极大强连通子图称为强连通分量，极大强连通子图的含义同上。

13. 生成树

    所谓连通图G的生成树，是G的包含其全部n个顶点的一个极小连通子图，是所谓极小连通子图是指包含所有顶点且保证连通的前提下尽可能少地包原图中地边。生成树必定包含且仅包含连通图G的n-1条边。在生成树中添加任意一条属于原图中的边必定会产生回路，因为新添加的边使其所依附的两个顶点之间有了第二条路经。若生成树中减少任意一条边，则必然称为非连通的。

14. 生成森林

    在非连通图中，由每个连通分量都可得到一个极小连通子图，即一棵生成树。这些连通分量的生成树就组成了一个非连通图的生成深林。

### 2.图的存储结构

#### 邻接矩阵

邻接矩阵（Adjacency Matrix）的存储结构，就是用一维数组存储图中顶点的信息，用矩阵表示图中各顶点之间的邻接关系。

邻接矩阵存储方法具有的特点

1. 无向图的邻接矩阵一定是一个对称矩阵。因此，在具体存放邻接矩阵只需存放上（或下）三角矩阵的元素即可。
2. 对于无向图，邻接矩阵的第i行（或第j列）非零元素（或非∞元素）的个数正好是第i个顶点的度数TD(v<sub>i</sub>)。
3. 对于有向图，邻接矩阵的第i行（或第j列）非零元素（或非∞元素）的个数正好是第i个顶点的出度OD(v<sub>i</sub>)（或入度ID(v<sub>j</sub>)。
4. 用邻接矩阵方法存储图，很容易确定图中任意两个顶点之间是否有边相连；但是，要确定图中有多少条边，则必须按行、按列对每个元素进行检测，所花费的时间代价很大。这是用邻接矩阵存储图的局限性。

在实际应用邻接矩阵存储图时，除了用一个二维数组存储用于表示顶点间相邻关系的邻接矩阵外，还需用一个一维数组来存储顶点信息，另外，还有图的顶点数和边数。

```C
#include<stdio.h>
#include<stdlib.h>
#define MaxVertexNum 100
typedef char VertexType;
typedef int EdgeType;
typedef struct
{
	VertexType vexs[MaxVertexNum];
	EdgeType edges[MaxVertexNum][MaxVertexNum];
	int n, e;
} MGraph;

void CreateMGraph(MGraph *G)
{
	int i, j, k;
	printf("请输入顶点数和边数\n");
	scanf_s("%d %d", &(G->n), &(G->e));
	printf("请输入顶点信息\n");
	for (i = 0; i < G->n; i++)
		scanf_s("\n%c", &(G->vexs[i]), 1);
	for (i = 0; i < G->n; i++)
		for (j = 0; j < G->n; j++)
			G->edges[i][j] = 0;
	printf("请输入每条边对应的两个顶点的序号\n");
	for (k = 0; k < G->e; k++)
	{
		scanf_s("%d %d", &i, &j);
		G->edges[i-1][j-1] = 1;
	}
}

int main()
{
	MGraph L;
	CreateMGraph(&L);
	return 0;
}
```

#### 邻接表

邻接表（Adjacency List）是图的一种顺序存储与链式存储结合的存储方法。邻接表表示类似于树的孩子链表表示法。就是对于图G中的每个顶点v<sub>i</sub>，将所有邻接于v<sub>i</sub>的顶点v<sub>j</sub>的顶点v<sub>j</sub>链成一个单链表，这个单链表就称为顶点v<sub>i</sub>的邻接表，再将所有顶点的邻接表表头放到数组中，就构成了图的邻接表。

```C
#include<stdio.h>
#include<stdlib.h>
//最大顶点数为100
#define MaxVerNuM 100
typedef char VertexType;
typedef struct node
{
	//边表结点
	int adjvex;
	//指向下一个邻接点的指针域
	struct node *next;
} EdgeNode;

typedef struct vnode
{
	VertexType vertex;
	EdgeNode * firstedge;
} VertexNode;
typedef VertexNode AdjList[MaxVerNuM];

typedef struct
{
	AdjList adjlist;
	int n, e;
} ALGraph;

int main()
{

	return 0;
}
```

### 3.图的遍历

图的遍历是指从图中的任意顶点出发，对图中的所有顶点访问一次且只访问一次。图的遍历操作和树的遍历操作功能相似。图的遍历是图的一种基本操作，图的许多其他操作都是建立在遍历的基础上的。

#### 深度优先搜索

深度优先搜索（Depth-First Search，DFS）类似于树的先根遍历，是树的先跟遍历的推广。假设初始状态是图中所有顶点未曾访问，则深度优先搜索可从图中某个顶点v出发， 访问此顶点，然后依次从v的为访问的邻接点出发深度优先遍历图，直至图中所有和v有路径相通的顶点都被访问到；若此时图中尚有顶点未被访问，则另选图中一个未曾被访问的顶点作为起始点，重复上述过程，直至图中所有顶点都被访问到为止。

```C
#include<stdio.h>
#include<stdlib.h>
//最大顶点数为100
#define MaxVerNuM 100
typedef char VertexType;
typedef struct node
{
	//边表结点
	int adjvex;
	//指向下一个邻接点的指针域
	struct node *next;
} EdgeNode;

typedef struct vnode
{
	VertexType vertex;
	EdgeNode * firstedge;
} VertexNode;
typedef VertexNode AdjList[MaxVerNuM];

typedef struct
{
	AdjList adjlist;
	//输入顶点数和边数
	int n, e;
} ALGraph;


ALGraph * Create_ALGraph()
{
	ALGraph *L;
	EdgeNode *q, *p;
	int i, j, k;
	L = (ALGraph *)malloc(sizeof(ALGraph));
	printf("请输入顶点数和边数\n");
	scanf_s("%d %d", &L->n, &L->e);
	for (i = 0; i < L->n; i++)
	{
		scanf_s("\n%c", &(L->adjlist[i].vertex), 1);
		L->adjlist[i].firstedge = NULL;
	}
	printf("请输如边的两个顶点\n");
	for (i = 0; i < L->e; i++)
	{
		scanf_s("%d %d", &j, &k);
		q = (EdgeNode *)malloc(sizeof(EdgeNode));
		q->adjvex = k-1;
		q->next = L->adjlist[j-1].firstedge;
		L->adjlist[j-1].firstedge = q;
		p = (EdgeNode *)malloc(sizeof(EdgeNode));
		p->adjvex = j-1;
		p->next = L->adjlist[k-1].firstedge;
		L->adjlist[k-1].firstedge = p;

	}
	return L;
}

void DFSAL(ALGraph *L, int i, int *l)
{
	EdgeNode *p;
	printf("访问结点%c\n", L->adjlist[i].vertex);
	l[i] = 1;
	p = L->adjlist[i].firstedge;
	while (p)
	{
		if (!l[p->adjvex])
			DFSAL(L, p->adjvex, l);
		p = p->next;
	}
}

void DFSTraverseAl(ALGraph *L)
{
	int i;
	int visited[MaxVerNuM] = {0};
	for (i = 0; i < L->n; i++)
	{
		if (!visited[i])
			DFSAL(L, i, visited);
	}
}


int main()
{
	ALGraph *L;
	int i;
	EdgeNode *q;
	L = Create_ALGraph();
	for (i = 0; i < L->n; i++)
	{
		printf("元素%c \n", L->adjlist[i].vertex);
		q = L->adjlist[i].firstedge;
		while (q != NULL)
		{
			printf("%d ", q->adjvex);
			q = q->next;
		}
		printf("\n");
	}
	DFSTraverseAl(L);
	return 0;
}
```

#### 广度优先搜索

广度优先搜索（Breadth-Frist Search，BFS）类似于数的按层次遍历的过程。

假设从图中某顶点v出发，在访问了v之后一次访问v的各个未曾访问过的邻接点，然后分别从这些邻接点出发依次访问它们的邻接点，并使“先被访问的顶点的邻接点”先于“后被访问的顶点的邻接点”被访问，直至图中所有已被访问的顶点的邻接点都被访问到。若此时图中尚有顶点未被访问，则另选图中一个未曾被访问的顶点作为起始点，重复上述过程。

```C
#include<stdio.h>
#include<stdlib.h>
//最大顶点数为100
#define MaxVerNuM 100
#pragma once
#define MaxNum 100
typedef struct
{
	int data[MaxNum];
	int front, rear;
}Queue;

Queue * Init_Queue()
{
	Queue *L;
	L = (Queue *)malloc(sizeof(Queue));
	L->front = L->rear = 0;
	return L;
}

int Empty_Queue(Queue *L)
{
	if (L->front == L->rear)
		return 1;
	return 0;
}

int Push_Queue(Queue *L, int x)
{
	if ((L->rear + 1) % MaxNum == L->front)
	{
		printf("队列已满\n");
		return -1;
	}
	L->data[L->rear] = x;
	L->rear = (L->rear + 1) % MaxNum;
	return 1;
}

int Out_Queue(Queue *L, int *x)
{
	if (Empty_Queue(L))
		return -1;
	*x = L->data[L->front];
	L->front = (L->front + 1) % MaxNum;
	return 1;
}
typedef char VertexType;
typedef struct node
{
	//边表结点
	int adjvex;
	//指向下一个邻接点的指针域
	struct node *next;
} EdgeNode;

typedef struct vnode
{
	VertexType vertex;
	EdgeNode * firstedge;
} VertexNode;
typedef VertexNode AdjList[MaxVerNuM];

typedef struct
{
	AdjList adjlist;
	//输入顶点数和边数
	int n, e;
} ALGraph;

ALGraph * Create_ALGraph()
{
	ALGraph *L;
	EdgeNode *q, *p;
	int i, j, k;
	L = (ALGraph *)malloc(sizeof(ALGraph));
	printf("请输入顶点数和边数\n");
	scanf_s("%d %d", &L->n, &L->e);
	printf("请输入%d个顶点元素\n", L->n);
	for (i = 0; i < L->n; i++)
	{
		scanf_s("\n%c", &(L->adjlist[i].vertex), 1);
		L->adjlist[i].firstedge = NULL;
	}
	printf("请输如边的两个顶点\n");
	for (i = 0; i < L->e; i++)
	{
		scanf_s("%d %d", &j, &k);
		q = (EdgeNode *)malloc(sizeof(EdgeNode));
		q->adjvex = k-1;
		q->next = L->adjlist[j-1].firstedge;
		L->adjlist[j-1].firstedge = q;
		p = (EdgeNode *)malloc(sizeof(EdgeNode));
		p->adjvex = j-1;
		p->next = L->adjlist[k-1].firstedge;
		L->adjlist[k-1].firstedge = p;

	}
	return L;
}

void DFSAL(ALGraph *L, int i, int *l)
{
	EdgeNode *p;
	printf("访问结点%c\n", L->adjlist[i].vertex);
	l[i] = 1;
	p = L->adjlist[i].firstedge;
	while (p)
	{
		if (!l[p->adjvex])
			DFSAL(L, p->adjvex, l);
		p = p->next;
	}
}

void DFSTraverseAl(ALGraph *L)
{
	int i;
	int visited[MaxVerNuM] = {0};
	for (i = 0; i < L->n; i++)
	{
		if (!visited[i])
			DFSAL(L, i, visited);
	}
}

int FirstAdjVex(ALGraph *L, int x)
{
	if(L->adjlist[x].firstedge)
		return L->adjlist[x].firstedge->adjvex;
	return -1;
}

int NextAdjVex(ALGraph *L, int i, int j)
{
	EdgeNode *p;
	p = L->adjlist[i].firstedge;
	while (p)
	{
		if (p->adjvex == j)
		{
			if (p->next)
				return p->next->adjvex;
			else
				return -1;
		}
		p = p->next;
	}
	return -1;
}

void BFSTraverse(ALGraph *L)
{
	int i, j;
	Queue *Q;
	int visited[MaxNum] = { 0 };
	for (i = 0; i < L->n; i++)
		visited[i] = 0;
	Q = Init_Queue();
	if (L->n < 1)
		return;
	i = 0;
	if (!visited[i])
	{
		Push_Queue(Q, i);
		while (!Empty_Queue(Q))
		{
			int x;
			Out_Queue(Q, &x);
			if (visited[x])
				continue;
			visited[x] = 1;
			printf("%c", L->adjlist[x].vertex);
			for (j = FirstAdjVex(L, x); j > -1; j = NextAdjVex(L, x, j))
				if (!visited[j])
					Push_Queue(Q, j);
		}
	}
}

int main()
{
	ALGraph *L;
	L = Create_ALGraph();
	BFSTraverse(L);
	return 0;
}
```

## 查找

### 基本概念和术语

1. 关键码

   关键码（Key）是数据元素（记录）中某个项或组合项的值，可以用它标识一个数据元素（记录）。能唯一确定一个数据元素（记录）的关键码称为住关键码；不能唯一确定一个数据元素（记录）的关键码称为次关键码。表中“学号”可看成住关键码，“姓名”则应视为次关键码，因可能有同名同性的学生 。

2. 查找表

   具有同一类型（属性）的数据元素（记录）组成的集合称为查找表。对查找表经常进行的操作有：查询某个“特定的”数据元素是否在查找表中；检索某个“特定的”数据元素的各种属性；在查找表中插入一个数据元素；从查找表中删除某个数据元素。根据操作的不同，查找表可分为静态查找表和动态查找表两类。

   静态查找表：仅对查找表进行两种所谓的“查找”操作，而不能被改变的表；

   动态查找表：对查找表进行“查找”操作外，可能还要向表中插入数据元素或删除表中数据元素，因而动态查找表在查找过程中可以被改变。

3. 查找

   按给定的某个值kx，在查找表中查找关键码为给定值kx的数据元素（记录）。关键码是主关键码时：由于主关键码唯一，所以查找结果也是唯一的，一旦找到，