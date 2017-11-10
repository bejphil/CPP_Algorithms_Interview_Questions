## Interview Questions for a C++ Developer with Emphasis on Algorithms

The following are a series of questions I wrote when interviewing candidates
 for a research assistant position with a Statistics group when I was an Undergraduate at the University of Washington.
 The position involved implementing high-performance statistical algorithms in C++.

The first question is fairly basic, and each subsequent question builds off the first ( roughly ) getting more difficult with each question.

The questions test for some basic CS knowledge, including:
* Basic loop structures
* Very basic understanding of optimization using multi-threading ( parallel for loop over independent tasks )
* Loss-of-significance when working with floating point values


The questions test for a lot of C++ specific knowledge, in particular:

* Understanding of Templates or Overloading
* Template Meta-Programming ( I did not expect many people to actually know how to use TMP, but if they did they got MEGA brownie points )

I expected candidates to be able to answer Question 1 mostly correctly. I also wanted to see candidates sort of understand Question 3, since loss-of-significance was a big problem in our research group, but most students seemed unaware of why it happened. Correct-ish answers on any of the other questions were mostly brownie points.

I've been told the questions are a bit "Too Math-y" for a typical software interview,
which seems like a fair evaluation. In retrospect the questions dive a bit too deep into the specifics of C++ and do not cover enough basic CS knowledge.

## What's in this Repository

The repository is in two parts, one being the actual question write-up ( with and without suggested answers ) and the other being example code to accompany the suggested answers.

To read the questions look under `Questions/With_Answers` or `Questions/Without_Answers` depending on your needs. The questions are provided in `.tex` and `.pdf` forms. In order to build these from raw `.tex` files yourself you'll need to have the `minted` packaged instead along with `xetex`. Build using `xetex --shellescape *.tex`

The sample code can be found under `Code` as a bunch of header files.
