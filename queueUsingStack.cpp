class MyQueue
{
    stack<int> s1, s2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while (s1.empty() != true)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int y = s2.top();
        s2.pop();
        return y;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty()
    {
        return (s1.empty() and s2.empty());
    }
};
