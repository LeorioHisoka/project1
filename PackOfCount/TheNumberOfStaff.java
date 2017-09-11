package PackOfCount;

public class TheNumberOfStaff {

    private static int TheNumberOfAll, Nurse, Doctor, Therapist;

    public void SetNurse() {
        Nurse++;
    }

    public void SetDoctor() {
        Doctor++;
    }

    public void SetTherapist() {
        Therapist++;
    }

    public void SetTheNumberOfAll() {
        TheNumberOfAll++;
    }

    public int GetNurse() {
        return Nurse;
    }

    public int GetDoctor() {
        return Doctor;
    }

    public int GetTherapist() {
        return Therapist;
    }

    public int GetTheNumberOfAll() {
        return TheNumberOfAll;
    }

    public TheNumberOfStaff() {
        Nurse = Doctor = Therapist = 0;
    }

}
