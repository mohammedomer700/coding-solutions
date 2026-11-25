int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    // The result has `cols` rows, each of length `rows`
    *returnSize = cols;
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));
    int** result = (int**)malloc(cols * sizeof(int*));

    for (int i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
        (*returnColumnSizes)[i] = rows;
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            result[c][r] = matrix[r][c];
        }
    }

    return result;
}
