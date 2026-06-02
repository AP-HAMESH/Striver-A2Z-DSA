bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
   
    int r=matrixSize;
    int c=matrixColSize[0];
    int left=0;
    int right=r*c-1;

    while(left<=right)
    {
        int mid=left+(right-left)/2;

        int r1=mid/c;
        int c1=mid%c;
        if(matrix[r1][c1]==target)
        {
            return true;
        }
        else if(matrix[r1][c1]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return false;
}