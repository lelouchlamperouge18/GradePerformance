# GradePerformance

Write a C++ program that, given as input the grades that a student earned in courses taken over the
span of (possibly) several semesters, outputs relevant statistics (e.g., grade point average (GPA)) about
his performance in each semester and in the aggregate. The grades that can be earned in a course,
together with their respective point values are: ...

Depending upon how many hours per week a course meets, it is worth either 1, 2, 3, or 4 credits. If a
student earns a grade of D or better (i.e., anything but F) in a course, he earns the corresponding
number of credits. Otherwise, he fails to earn any credits.
• The number of quality points that a student earns from taking a course is the product of its number
of credits with the point value of the student’s grade in the course. For example, if a student earns
B- in a 3-credit course, she earns 3 * 2.7, or 8.1, quality points.
• A student’s semester GPA is found by dividing the sum of the credits of the courses taken by the
student during that semester into the sum of the quality points he earned in those courses.
• A student’s aggregate GPA is found by dividing the sum of the credits of all the courses taken by the
student into the quality points that he earned in all those courses.
The user will first input a value indicating the number of semesters. Next the user will enter how many
courses (m) the student was enrolled during that semester. Each of the following m lines contains the
user will enter an integer between 1 and 4, inclusive, indicating the number of credits of one of those
courses, followed (on the same line) by the grade that the student earned in that course, all labeled. For
each semester’s worth of data, six lines of output are to be generated. The first one identifies the
semester by number (beginning with 1). The second line reports how many credits the student
attempted to earn that semester. The third line reports how many credits the student succeeded in
earning that semester. The fourth line reports how many quality points to one decimal place the student
earned that semester. The fifth line reports the student’s GPA for that semester to two decimal places.
The sixth line is blank. Following the output for the last semester, the corresponding aggregate statistics
are reported, in a similar format. Must use arrays. Do not error check.

