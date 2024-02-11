SUBS_DIR=$1
THIS_DIR=$(pwd)
YAS=$(pwd)/sim_testbed/misc/yas
YIS=$(pwd)/sim_testbed/misc/yis

echo "Checking $SUBS_DIR"

if [[ -e $SUBS_DIR/binary_search_it.ys ]]; then
    # echo  python3 checkers/binary_search_checker.py yis $SUBS_DIR/binary_search_it.ys $YIS $YAS
    python3 checkers/binary_search_checker.py yis $SUBS_DIR/binary_search_it.ys $YIS $YAS binary_search_it_tests > $SUBS_DIR/binary_search_it_checker.out 2> $SUBS_DIR/binary_search_it_checker.err
    if [[ ! -s $SUBS_DIR/binary_search_it_checker.err ]]; then
        rm $SUBS_DIR/binary_search_it_checker.err
    fi
else
    echo "binary_search_it.ys does not exist in submission" > $SUBS_DIR/binary_search_it_checker.out
    echo "Grade: 0" >> $SUBS_DIR/binary_search_it_checker.out
fi

if [[ -e $SUBS_DIR/binary_search_rec.ys ]]; then
    # echo  python3 checkers/binary_search_checker.py yis $SUBS_DIR/binary_search_rec.ys $YIS $YAS
    python3 checkers/binary_search_checker.py yis $SUBS_DIR/binary_search_rec.ys $YIS $YAS binary_search_rec_tests > $SUBS_DIR/binary_search_rec_checker.out 2> $SUBS_DIR/binary_search_rec_checker.err
    if [[ ! -s $SUBS_DIR/binary_search_rec_checker.err ]]; then
        rm $SUBS_DIR/binary_search_rec_checker.err
    fi
else
    echo "binary_search_rec.ys does not exist in submission" > $SUBS_DIR/binary_search_rec_checker.out
    echo "Grade: 0" >> $SUBS_DIR/binary_search_rec_checker.out
fi


if [[ -e $SUBS_DIR/merge.ys ]]; then
    # echo  python3 checkers/merge_checker.py yis $SUBS_DIR/merge.ys $YIS $YAS
    python3 checkers/merge_checker.py yis $SUBS_DIR/merge.ys $YIS $YAS > $SUBS_DIR/merge_checker.out 2> $SUBS_DIR/merge_checker.err
    if [[ ! -s $SUBS_DIR/merge_checker.err ]]; then
        rm $SUBS_DIR/merge_checker.err
    fi
else
    echo "merge.ys does not exist in submission" > $SUBS_DIR/merge_checker.out
    echo "Grade: 0" >> $SUBS_DIR/merge_checker.out
fi

if [[ -e $SUBS_DIR/seq-full.hcl ]]; then
    cp $SUBS_DIR/seq-full.hcl $SUBS_DIR/sim/seq/seq-full.hcl
    cd $SUBS_DIR/sim/seq
    make clean
    if make VERSION=full > ../../partb.out 2>&1; then
        echo "make ssim VERSION=full successful" >> ../../partb.out
        cd ../y86-code
        make clean
        make testssim >> ../../partb.out
        cd ../ptest
        make clean
        make SIM=../seq/ssim >> ../../partb.out
        cd ../seq
        ./ssim -t ../sample_files/jtabtest1.yo > ../../partb_jtabtest.out 2>&1
        ./ssim -t ../sample_files/jtabtest2.yo >> ../../partb_jtabtest.out 2>&1
        ./ssim -t ../sample_files/jtabtest3.yo >> ../../partb_jtabtest.out 2>&1
        cd $THIS_DIR
        python3 checkers/switch8_checker.py ssim checkers/switch8_jtab_answerkey.ys $SUBS_DIR/sim/seq/ssim $YAS switch8_answerkey_test_cases > $SUBS_DIR/partb_answerkey_switch8.out 2> $SUBS_DIR/partb_answerkey_switch8.err
        if [[ ! -s $SUBS_DIR/partb_answerkey_switch8.err ]]; then
            rm $SUBS_DIR/partb_answerkey_switch8.err
        fi
    else
        echo "make ssim VERSION=full failed" >> ../../partb.out
    fi
    cd $THIS_DIR
else
    echo "seq-full.hcl does not exist in submission" > $SUBS_DIR/partb.out
fi

if [[ -e $SUBS_DIR/pipe-full.hcl ]]; then
    cp $SUBS_DIR/pipe-full.hcl $SUBS_DIR/sim/pipe/pipe-full.hcl
    cd $SUBS_DIR/sim/pipe
    make clean
    if make VERSION=full > ../../partc.out 2>&1; then
        echo "make psim VERSION=full successful" >> ../../partc.out
        cd ../y86-code
        make clean
        make testpsim >> ../../partc.out
        cd ../ptest
        make clean
        make SIM=../pipe/psim >> ../../partc.out
        cd ../pipe
        ./psim -t ../sample_files/jtabtest1.yo > ../../partc_jtabtest.out 2>&1
        ./psim -t ../sample_files/jtabtest2.yo >> ../../partc_jtabtest.out 2>&1
        ./psim -t ../sample_files/jtabtest3.yo >> ../../partc_jtabtest.out 2>&1
        cd $THIS_DIR
        python3 checkers/switch8_checker.py psim checkers/switch8_jtab_answerkey.ys $SUBS_DIR/sim/pipe/psim $YAS switch8_answerkey_test_cases > $SUBS_DIR/partc_answerkey_switch8.out 2> $SUBS_DIR/partc_answerkey_switch8.err
        if [[ ! -s $SUBS_DIR/partc_answerkey_switch8.err ]]; then
            rm $SUBS_DIR/partc_answerkey_switch8.err
        fi
        if [[ -e $SUBS_DIR/switch8.ys ]]; then
            python3 checkers/switch8_checker.py psim $SUBS_DIR/switch8.ys $SUBS_DIR/sim/pipe/psim $YAS switch8_test_cases > $SUBS_DIR/partc_switch8.out 2> $SUBS_DIR/partc_switch8.err
            if [[ ! -s $SUBS_DIR/partc_switch8.err ]]; then
                rm $SUBS_DIR/partc_switch8.err
            fi
        else
            echo "switch8.ys does not exist in submission" > $SUBS_DIR/partc_switch8.out
            echo "Grade: 0" >> $SUBS_DIR/partc_switch8.out
        fi
    else
        echo "make psim VERSION=full failed" >> ../../partc.out
    fi
    cd $THIS_DIR

else
    echo "pipe-full.hcl does not exist in submission" > $SUBS_DIR/partc.out
fi