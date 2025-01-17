/* The MIT License

   Copyright (c) 2014 Adrian Tan <atks@umich.edu>

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#ifndef BED_H
#define BED_H

#include "hts_utils.h"
#include "utils.h"
#include "interval.h"

class BEDRecord : public Interval
{
    public:
    std::string chrom;
    int32_t start1, end1;
    
    /**
     * Constructor.
     */
    BEDRecord(kstring_t *s);

    /**
     * Constructor.
     */
    BEDRecord(char *s);
    
    /**
     * Constructor.
     */
    BEDRecord(std::string& s);

    /**
     * Constructor.
     */
    BEDRecord(std::string& chrom, int32_t start1, int32_t end1);

    /**
     * Prints this BED record to STDERR.
     */
    void print();
    
    /**
     * String version of BED record.
     */
    std::string to_string();

    private:
};

#endif