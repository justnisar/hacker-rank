	// Add your code here

    public Difference(int[] elements){
        this.elements = elements;
    }

    public void computeDifference(){
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i = 0 ; i < elements.length ; i++){
            if(elements[i] < min)
                min = elements[i];
            if(elements[i] > max){
                max = elements[i];
            }
            maximumDifference = max - min;
        }
    }
