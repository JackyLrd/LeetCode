class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        d1 = {}
        d2 = {}
        d3 = {}
        ans = []
        for i in nums1:
            try:
                d1[i] = d1[i] + 1
            except KeyError:
                d1[i] = 1    
        for i in nums2:
            try:
                d2[i] = d2[i] + 1
            except KeyError:
                d2[i] = 1
        if len(d1) < len(d2):
            for i in d1.items():
                try:
                    d3[i[0]] = i[1] if i[1] < d2[i[0]] else d2[i[0]]
                except KeyError:
                    pass
            for i in d3.items():
                ans += [i[0] for j in range(0, i[1])]
        else:
            for i in d2.items():
                try:
                    d3[i[0]] = i[1] if i[1] < d1[i[0]] else d1[i[0]]
                except KeyError:
                    pass
            for i in d3.items():
                ans += [i[0] for j in range(0, i[1])]
        return ans
        
        
