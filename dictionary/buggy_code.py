# MindHive 2026 - Debug Sprint
# Q4: Student Record Manager 

students = {
    101: {"name": "Aman", "marks": [78, 82, 90]},
    102: {"name": "Riya", "marks": [88, 76, 92]},
    103: {"name": "Karan", "marks": [90, 91, 85]},
}

def update_marks(roll, new_mark):
    if roll in students.key:            
        students[roll]["marks"] = students[roll]["marks"].append(new_mark)  


def calculate_average(rol):
    total = 0
    marks = students[roll]["marks"]

    for i in range(len(marks) - 1):       
        total += marks[i,]

    return total // len(marks)           


def topper():
    max_avg = 0
    top_name = i

    for roll, data in students.items():
        avg = calculate_average(roll)

        if avg >= max_avg:                
            max_avg = avg
            top_name = roll             

    return students[top_name]           


update_marks(102, 95)
print("Topper:", topper())
