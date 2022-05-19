class MyStack
{

public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        // int y;
        q1.push(x);
        if (!q2.empty())
        {
            while (q2.empty() != true)
            {

                q1.push(q2.front());
                q2.pop();
            }
            while (q1.empty() != true)
            {

                q2.push(q1.front());
                q1.pop();
            }
        }
        else
        {
            q2.push(x);
            q1.pop();
        }
    }

    int pop()
    {
        int y = q2.front();
        q2.pop();
        return y;
    }

    int top()
    {
        return q2.front();
    }

    bool empty()
    {
        //         if(q2.empty()==true){

        //         }
        return q2.empty() == true ? true : false;
    }
};
