/*
 * Copyright (c) 2018 Naveen Hegde
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef CX_LEVELS_H
#define CX_LEVELS_H

namespace cx
{

namespace level1 { enum level { bid = 0, bid_size = 1, ask = 0, ask_size = 1 }; }
namespace level2 { enum level { bid = 2, bid_size = 3, ask = 2, ask_size = 3 }; }
namespace level3 { enum level { bid = 4, bid_size = 5, ask = 4, ask_size = 5 }; }
namespace level4 { enum level { bid = 6, bid_size = 7, ask = 6, ask_size = 7 }; }
namespace level5 { enum level { bid = 8, bid_size = 9, ask = 8, ask_size = 9 }; }

}

#endif //CX_LEVELS_H