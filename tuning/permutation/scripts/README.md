# Usage

1. Go to the hiptensor build/bin folder
2. 2. Run `bash <path>/gen_performance_data.sh`
3. 3. Go to folder data<2|3|4>
4. 4. Run `bash parse_performance_data.sh`
5. 5. The result is in final\_top20.cpp

# Scripts

## count\_valid\_instances.py

How many points will be tested in rank 2, 3, 4 space

## gen\_performance\_data.sh

Run gen\_performance\_data2/3/4.py and save output to folder data2/3/4. Existing data folder will be renamed to data\_{timestamp}

## parse\_performance\_data.sh

Find out the hyperparameters with the best perf and create C++ expressions for them.
