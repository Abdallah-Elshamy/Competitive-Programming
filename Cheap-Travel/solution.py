from math import ceil
s = str(input())
temp = s.split()
n = int(temp[0])
m = int(temp[1])
a = int(temp[2])
b = int(temp[3])
price_per_ride_in_m =b/m 
max_rides_in_m = ceil(n/m)
if a*n < b*max_rides_in_m:
    print(a*n)
else:
    if n%m ==0:
        print(int(n*price_per_ride_in_m))
    else:
        max_num_of_m_rides = (n//m)
        min_num_of_a_rides = n - (m*(n//m))
        if b*  (ceil(min_num_of_a_rides/m)) >  a * min_num_of_a_rides:
            print(int(b * max_num_of_m_rides + a * min_num_of_a_rides ))
        else:
            print(max_rides_in_m*b)
