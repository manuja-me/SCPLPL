def main():
    todo_list = []
    
    while True:
        command = input('Enter a command - (a)dd ,(v)iew ,(c)complete ,(d)elete ,(e)xit: ')

        if command == 'a':
            add_task(todo_list)
        elif command == 'v':
            view_task(todo_list)
        elif command == 'c':
            complete_task(todo_list)
        elif command == 'd':
            delete_task(todo_list)
        elif command == 'e':
            print("\nSee ya")
            break
        else:
            print("\nInvalid command dawg")

def add_task(todo_list):
    task = input("\nGive me a task to store: ")
    task_details = { "taskName": task , "completed": False} 
    todo_list.append(task_details)
    print("Task Added!\n")

def view_task(todo_list):
    if not todo_list:
        print("\nNo task to display!!\n")
    else:
        for index, task in enumerate(todo_list):
            status = 'completed' if task["completed"] else "Pending"
            print(f"{ index + 1 }. {task['taskName']} ({status})")

def complete_task(todo_list):
    task_num = int(input("\nEnter the task number to mark it as completed: ")) 
    if 0 < task_num <= len(todo_list):
        todo_list[task_num - 1]["completed"] = True
        print("Task marked as complete.\n")
    else:
        print("Invalid task number. Check Again!\n")
        
def delete_task(todo_list):
    task_num = int(input("\nEnter the task number to delete task: "))
    if 0 < task_num <= len(todo_list):
        todo_list.pop( task_num - 1)
        print("Task deleted permenantly!!!\n")
    else:
        print("Not a Valid task Number\n")

if __name__ == "__main__":
    main()
