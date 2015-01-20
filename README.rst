Sudoku Dataset
==============

This dataset contains images of Sudoku taken in various newspapers using martphone Cameras.

This dataset contains 160 pictures of Sudoku, divided into two sets: 120 training images and 40 test images. 

Results
-------

Here are some results that have been obtained on this dataset.

1. Baptiste Wicht / Jean Hennebert (EIA-FR, Switzerland) : Hough Transform and DBN : 12.5% error rate
  * `Camera-based Sudoku recognition with deep belief network <http://ieeexplore.ieee.org/xpl/articleDetails.jsp?tp=&arnumber=7007986>`_

Usage
-----

You can download the dataset using different ways:

* Checkout this repository
* Direct download an archive of the dataset:
   * `v1_training.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v1_training.tar.bz2>`_
   * `v1_test.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v1_test.tar.bz2>`_


References
----------

If you want to use this dataset in a publication, please reference the following paper:

Wicht, Baptiste; Hennebert, Jean, "Camera-based Sudoku recognition with deep belief network" Soft Computing and Pattern Recognition (SoCPaR), 2014 6th International Conference of , vol., no., pp.83,88, 11-14 Aug. 2014

.. code:: bibtex

    @INPROCEEDINGS{7007986,
    author={Wicht, Baptiste and Hennebert, Jean},
    booktitle={Soft Computing and Pattern Recognition (SoCPaR), 2014 6th International Conference of},
    title={Camera-based Sudoku recognition with deep belief network},
    year={2014},
    month={Aug},
    pages={83-88},
    keywords={Computer architecture;Image recognition;Image segmentation;Microprocessors;Standards;Training;Transforms;Camera-based OCR;Deep Belief Network;Text Detection;Text Recognition},
    doi={10.1109/SOCPAR.2014.7007986},}

Format
------

The format of the dataset is really straightforward. For each imageX.jpg file, there is imageX.dat file contains the metadata for this file. Here is an example of such a file:

::

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

Contact
-------

If you want your results to be published on this page, you can contact `Baptiste Wicht <mailto:baptiste.wicht@gmail.com>`_ or make a Pull Request to the repository.

If you have any question related to the dataset, you can contact `Baptiste Wicht <mailto:baptiste.wicht@gmail.com>`_.
