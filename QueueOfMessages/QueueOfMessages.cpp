#include <iostream>
#include <queue>
#include <string>

using namespace std;


class Message
{

public:
    std::string sender;
    std::string content;

    Message(std::string mySender, std::string myMessage)
    {
        sender = mySender;
        cout <<  "message from " + sender + "is entering the queue";
    }

    void Display() const
    {
        cout << "---------------Processing Display---------------" << endl;
        cout << "message from " + sender << ": " + content << " is being proceesed(leaving the queue)" << endl;
        
    }
};

int main()
{
    std::queue<Message> myQueue;
    int nbOfMessages;
    string sender;
    string content;
    
    cout << "how many messages u sending dude? " << endl;
    cin >> nbOfMessages;
    cin.ignore();
    
    for (int i = 0; i< nbOfMessages; i++)
    {
        cout<<  "Please enter the sender of message : " << i+1 << endl;
        getline(cin, sender);
        cout << "Please enter the content of message : " << i+1 << endl;
        getline(cin, content);
        myQueue.push(Message(sender, content));
        sender = "";
        content = "";
    }

    while (!myQueue.empty())
    {
        Message currentMsg = myQueue.front();
        currentMsg.Display();
        myQueue.pop();
    }
}
