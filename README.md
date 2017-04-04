# lab3
 how to compile your program for question A:make
 explanation for question B:
    insertion sort 時間複雜度是O(n log n)
    sort 時間複雜度是O(n^2)
    從函數圖形來看y1=x^2恆大於y2=x(logx)，且dy1/dx是線性往右上角跑dy2/dx則是開口向下非常緩滿的向右上跑，
    代表隨著x增加，y1的變化率增大的速度會比y2快
    y2的變化率 0.002603 0.37371
    y1的變化率 1.163876 115.28106
    size=1000
    sort(): 0.000198 seconds
    insertion_sort(): 0.010064 seconds
    size=10000
    sort(): 0.002801 seconds
    insertion_sort(): 1.17394 seconds
    size=100000
    sort(): 0.040172 seconds
    insertion_sort(): 116.455 seconds
