import utils
dataset = utils.load_dataset("mnist.pkl")
network1 = utils.load_network("network_3layer.pkl")
network2 = utils.load_network("network_2layer.pkl")

X_sample = dataset['X_test'][100] # An image of digit 6
utils.display_image(X_sample)
from the3 import *
forward_pass(network1, X_sample)
