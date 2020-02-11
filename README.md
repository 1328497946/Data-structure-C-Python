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
> 

### 3.算法分析

所谓好的算法，除了满足上文提到的几个基本要求外，还必须以较少的时间与空间代价来解决相同规模的问题。因此，一个算法的优劣，可以从该算法在计算机上运行的时间和所占储存空间来衡量和评判。算法分析就是预先分析算法在实际执行时空代价指标。

当一个算法被转换成程序并在计算机山执行时，其运行所需的时间一般取决于下列几个因素。

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

  

