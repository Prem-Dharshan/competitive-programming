You are about to drive to your vacation destination.
You open Google Maps - it shows you that the estimated distance is A minutes at your normal pace.
You are in a hurry and do the following

* At normal pace, in B minutes - you would have reached the rest point
* You drive at 2× the normal pace and reach the rest point in half the time
* After the rest point - you drive at your normal pace again

What is your total travel time?

###Input Format###
* The first line contains two space separated integers A,B - as per the problem statement.

###Output Format###
Print in a single line - your total travel time.

###Constraints###

* 1 ≤ A,B ≤ 1000
* B is an even integer.

###Subtasks###

**Subtask #1 (100 points):** original constraints

###Sample 1:###

```
 Input | Output
------------- | -------------
 1000 220 | 890
```

###Sample 2:###

```
 Input | Output
------------- | -------------
60 28 | 46
```

###SOLUTION###
A, B = map(int, input().split())
total_travel_time = A + B//2 - B
print(total_travel_time)
