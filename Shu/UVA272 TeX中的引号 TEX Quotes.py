tex=input()
flag=0
replace1=["``","''"]
start = 0  # 添加起始位置跟踪
while 1:
    a=tex.find("\"",start)
    if a == -1:
        break
    tex=tex[:a]+replace1[flag]+tex[a+1:]
    flag=(flag+1)%2
print(tex)

#这里的输入没有确定的格式 大致思路长这样
