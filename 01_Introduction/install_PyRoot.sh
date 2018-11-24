# assumption: root in installed with pyroot dependencies
sudo cp $ROOTSYS/lib/ROOT.py /usr/lib/python2.7/ROOT.py
sudo cp $ROOTSYS/lib/libPyROOT.so /usr/lib/python2.7/ROOT.py
conda install jupyter
conda install pytables
conda install graphviz
conda install scikit-learn
pip install jupyter metakernel zmq
pip install --upgrade --user https://github.com/rootpy/root_numpy/zipball/master
pip install --upgrade --user https://github.com/rootpy/rootpy/zipball/master
