rm -rf submissions_extracted_with_testbeds
cp -r submissions_extracted submissions_extracted_with_testbeds
for i in submissions_extracted_with_testbeds/*; do
    cp -r sim_testbed $i/sim
    echo $i
    ./single_submission_checker.sh $i
done
echo "All submissions checked. Collecting results."
python3 collect_individual_results.py
