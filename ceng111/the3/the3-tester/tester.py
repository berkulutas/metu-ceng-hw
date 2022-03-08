from the3 import *
import test
import utils
dataset = utils.load_dataset("mnist.pkl")
network1 = utils.load_network("network_3layer.pkl")
network2 = utils.load_network("network_2layer.pkl")
test_data_length = len(dataset['X_test'])
true_count = 0
tot_count = 0
for i in range(test_data_length):
	ffpp=(forward_pass(network1,dataset['X_test'][i]))
	for j in range(len(test.kerem[i])):
		tot_count += 1
		if abs(test.kerem[i][j]-ffpp[j])<0.000001:
			true_count +=1
for i in range(test_data_length):
	val = forward_pass(network2,dataset['X_test'][i])
	for j in range(len(test.lale[i])):
		tot_count += 1
		if abs(test.lale[i][j]-val[j])<0.000001:
			true_count +=1

print("YOU HAVE MATCHED %"+str((true_count/tot_count)*100)+" ")
