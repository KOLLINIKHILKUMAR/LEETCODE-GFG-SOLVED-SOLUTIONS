class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        def makedis(s):
            s=s[1:]
            return "$"+str("{0:.2f}".format((int(s)*(1-(discount/100)))))
        sen=list(sentence.split(' '))
        ans=""
        for i in sen:
            if i[0]=='$' and i[1:].isnumeric():
                ans=ans+makedis(i)+' '
            else:
                ans=ans+i+' '
        ans=ans[:-1]
        return ans