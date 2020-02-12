class InsertError(Exception):
    pass


class DeleteError(Exception):
    pass


class SeqList:
    def __init__(self):
        self.MAXSIZE = 100
        self.data = [None] * self.MAXSIZE
        self.last = -1

    def Insert_SeqList(self, i, x):
        if self.last == self.MAXSIZE:
            raise InsertError("顺序表已满")
        if i < 1 or i > self.last + 2:
            raise InsertError("插入位置错误")
        for j in range(self.last, i - 1, -1):
            self.data[j + 1] = self.data[j]
        self.data[i - 1] = x
        self.last += 1

    def Delete_SeqList(self, i):
        if i < 1 or i > self.last + 1:
            raise DeleteError("删除元素的位置错误")

    def Location_SeqList(self, x):
        for i in range(0, self.last):
            if self.data[i] == x:
                return i
        return "元素未找到"

    def Partition_SeqList(self):
        x = self.data[0]
        for i in range(1, self.last + 1):
            if self.data[i] < x:
                y = self.data[i]
                for j in range(i - 1, -1, -1):
                    self.data[j + 1] = self.data[j]
                self.data[0] = y

    def Print_SeqList(self):
        for i in range(0, self.last + 1):
            if i != self.last:
                print(self.data[i], end=", ")
            else:
                print(self.data[i], end="")


if __name__ == "__main__":
    A = SeqList()
    for i in range(1, 20):
        A.Insert_SeqList(i, i)
    A.Print_SeqList()
