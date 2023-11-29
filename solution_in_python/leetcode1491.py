class Solution:
    def average(self, salary: List[int]) -> float:
        x=max(salary)
        y=min(salary)
        sum1=0
        for i in salary:
            if i==x:
                salary.remove(i)
        for i in salary:
            if i==y:
                salary.remove(i)
        sum1=sum(salary)
        return sum1/len(salary)