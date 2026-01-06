class MyCalendarTwo:
    def __init__(self):
        self.bookings = []
        self.overlaps = []

    def book(self, start: int, end: int) -> bool:
        # Step 1: Check triple booking
        for s, e in self.overlaps:
            if start < e and end > s:
                return False  # triple booking

        # Step 2: Record new overlaps
        for s, e in self.bookings:
            if start < e and end > s:
                self.overlaps.append((max(start, s), min(end, e)))

        # Step 3: Add booking
        self.bookings.append((start, end))
        return True
