class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        def checkIPv4(s):
            # Check length should be <=3 and should not be 0
            if  len(s)>3 or len(s)==0: return False
            for i, c in enumerate(s):
                # Check first char is not 0 for len>1
                if c == '0' and i == 0 and len(s) != 1:
                    return False
                # Check char is digit
                if not c.isdigit():
                    return False
            # Check 0  <=  num <= 255
            num = int(s)
            if num < 0 or  num > 255:
                return False
            return True
                
            
        def checkIPv6(s):
            # Check length should be <=4 and should not be 0
            if  len(s)>4 or len(s)==0: return False
            for i, c in enumerate(s):
                if c not in "0123456789abcdefABCDEF":
                    return False
            return True
        
        ipv4 =   queryIP.split(".")
        # Check if we have 4 elements in ipv4
        if len(ipv4) == 4:
            # If all elements of ipv4 are True -> query is IPV4
            if all([checkIPv4(s) for s in ipv4]):
                return "IPv4"
                
        ipv6 =   queryIP.split(":")
        # Check if we have 8 elements in ipv6
        if len(ipv6) == 8:
            # If all elements of ipv6 are True -> query is IPV6
            if all([checkIPv6(s) for s in ipv6]):
                return "IPv6"
            
        return "Neither"
        