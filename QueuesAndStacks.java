public class Solution {
    // Write your code here.
    Stack<Character> s;
    Queue<Character> q;
    public Solution(){
        s = new Stack<Character>();
        q = new LinkedList<Character>();
    }
    
    public void pushCharacter(char ch){
        s.push(ch);
    }
    
    public void enqueueCharacter(char ch){
        q.add(ch);
    }
    
    public char popCharacter(){
        return s.pop(); 
    }
    
    public char dequeueCharacter(){
        return q.poll();
    }
    
