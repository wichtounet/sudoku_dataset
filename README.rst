Sudoku Dataset
==============

This dataset contains images of Sudoku taken in various newspapers using martphone Cameras.

This dataset contains 200 pictures of Sudoku, divided into two sets: 160 training images and 40 test images.

Versions
--------

There are three versions of the datasets:

* V2: The complete dataset with 200 images (160 for training and 40 for testing)
* mixed: Every puzzle was completed artificially (each 81 digit is set), the
  same images as V2, but complete.
* V1: The old version of 160 images, should not be used anymore

Results
-------

Here are some results that have been obtained on this dataset.

1. Baptiste Wicht / Jean Hennebert (EIA-FR, Switzerland) : Hough Transform and DBN : 12.5% error rate on v1
  * `Camera-based Sudoku recognition with deep belief network <http://ieeexplore.ieee.org/xpl/articleDetails.jsp?tp=&arnumber=7007986>`_
  * Baptiste Wicht Ph.D. Thesis (unpublished yet): 7.5% error rate on mixed version, 17.5% on v2

Usage
-----

You can download the dataset using different ways:

1. Checkout this repository
1. Direct download an archive of the dataset

* V2:
   * `v2_training.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v2_training.tar.bz2>`_
   * `v2_test.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v2_test.tar.bz2>`_

* mixed:
   * `v2_mixed_training.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v2_mixed_training.tar.bz2>`_
   * `v2_mixed_test.tar.bz2 <https://github.com/wichtounet/sudoku_dataset/blob/master/datasets/v2_mixed_test.tar.bz2>`_


References
----------

If you want to use this dataset in a publication, please reference one the following papers:

* Wicht, Baptiste; Hennebert, Jean, "Camera-based Sudoku recognition with deep belief network" Soft Computing and Pattern Recognition (SoCPaR), 2014 6th International Conference of , vol., no., pp.83,88, 11-14 Aug. 2014

.. code:: bibtex

    @inproceedings{wicht2014camera,
      title={Camera-based Sudoku recognition with deep belief network},
      author={Wicht, Baptiste and Hennebert, Jean},
      booktitle={Soft Computing and Pattern Recognition (SoCPaR), 2014 6th International Conference of},
      pages={83--88},
      year={2014},
      organization={IEEE}
    }

* Wicht, Baptiste, and Jean Hennebert, "Mixed handwritten and printed digit recognition in Sudoku with Convolutional Deep Belief Network." Document Analysis and Recognition (ICDAR), 2015 13th International Conference on. IEEE, 2015.

.. code:: bibtex

    @inproceedings{wicht2015mixed,
      title={Mixed handwritten and printed digit recognition in Sudoku with Convolutional Deep Belief Network},
      author={Wicht, Baptiste and Henneberty, Jean},
      booktitle={Document Analysis and Recognition (ICDAR), 2015 13th International Conference on},
      pages={861--865},
      year={2015},
      organization={IEEE}
    }
    
License
-------

The dataset and the images are released under the CC-BY-4.0 License.
The code (cpp and bash) is released under the MIT License.

Format
------

The format of the dataset should be straightforward. For each imageX.jpg file, there is imageX.dat file contains the metadata for this file. Here is an example of such a file:

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

Outlines
--------

The outlines of the sudoku grids have ben contributed by Lars @panexe
With the outlines_sorted.csv file, you can train a model to recognize the grid themselves. 

Contact
-------

If you want your results to be published on this page, you can contact `Baptiste Wicht <mailto:baptiste.wicht@gmail.com>`_ or make a Pull Request to this repository.

If you have any question related to the dataset, you can contact `Baptiste Wicht <mailto:baptiste.wicht@gmail.com>`_ or open an Issue on this repository.
