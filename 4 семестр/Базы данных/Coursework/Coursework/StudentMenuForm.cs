using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Coursework
{
    public partial class StudentMenuForm : Form
    {
        public String studentName;
        public int studentID;

        public StudentMenuForm()
        {
            InitializeComponent();
        }

        public StudentMenuForm(int studentID)
        {
            InitializeComponent();
            this.studentID = studentID;
        }

        private void StudentMenuForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'mainDataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter.Fill(this.mainDataSet.Student);
            
            // Дарт Вейдер тут был сражен сэром Скайуокером

            // Получаю имя студента
            var query = from student in this.mainDataSet.Student
                        where student.ID == studentID
                        select student;

            foreach (var student in query)
            {
                if (student.ID != 0)
                {
                    this.studentName = student.Имя + " " + student.Фамилия;
                    this.greetingLabel.Text = "Привет, " + studentName;
                    break;
                }
            }
        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            LoginForm.GetLoginForm().Show();
            this.Close();
        }

        private void StudentMenuForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            LoginForm.GetLoginForm().Show();
        }

        private void progressButton_Click(object sender, EventArgs e)
        {
            StudentProgressForm progressForm = new StudentProgressForm(backForm: this, studentID: this.studentID);
            this.Hide();
            progressForm.Show();
        }
    }
}
