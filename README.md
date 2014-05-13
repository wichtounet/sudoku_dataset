## Sudoku Dataset

This dataset contains images of Sudoku taken in various newspapers using martphone Cameras.

### Results

Here are some results that have been obtained on this dataset.

1. Baptiste Wicht / Jean Hennebert (EIA-FR, Switzerland) : Hough Transform and DBN : 12.5% error rate

### Usage

You can download the dataset using different ways:

* Checkout this repository
* Direct download an archive of the dataset:

### References

If you want to use this dataset in a publication, please reference the following paper:

TODO Add paper reference

###  Format

The format of the dataset is really straightforward. For each imageX.jpg file, there is imageX.dat file contains the metadata for this file. Here is an example of such a file:

    sonyEricsson s500i
    640x480:24 JPG
    0 0 0 7 0 0 0 8 0
    0 9 0 0 0 3 1 0 0
    0 0 6 8 0 5 0 7 0
    0 2 0 6 0 0 0 4 9
    0 0 0 2 0 0 0 5 0
    0 0 8 0 4 0 0 0 7
    0 0 0 9 0 0 0 3 0
    3 7 0 0 0 0 0 0 6
    1 0 5 0 0 4 0 0 0

The first line contains the brand and model of the phone that took the picture. The second line contains information about the format of the image. Then the sudoku is described, 0 indicating an empty cell.

### Contact

If you want your results to be published on this page, you can contact [Baptiste Wicht](mailto:baptiste.wicht@gmail.com).

If you have any question related to the dataset, you can contact [Baptiste Wicht](mailto:baptiste.wicht@gmail.com).
