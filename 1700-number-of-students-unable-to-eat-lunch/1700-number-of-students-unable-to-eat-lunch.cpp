class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         queue<int> stud_choice;
        for(int i=0;i<students.size();i++)
        {
            stud_choice.push(students[i]);
        }
        int rot=0,i=0;
        while(stud_choice.size()&&rot<stud_choice.size())
        {
            if(stud_choice.front()==sandwiches[i])
            {
                stud_choice.pop();
                i++;
                rot=0;
            }
            else{
                int ch=stud_choice.front();
                rot++;
                stud_choice.pop();
                stud_choice.push(ch);
            }
        }
        return stud_choice.size();
    }
};